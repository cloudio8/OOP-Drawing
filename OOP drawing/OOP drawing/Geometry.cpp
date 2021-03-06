#include<iostream>
#include<thread>
#include<chrono>
#include "Geometry.h"
void Geometry::drawPixel(const int & i, const int & j, const float & red, const float & green, const float & blue)
{
	pixels[(i + width* j) * 3 + 0] = red;
	pixels[(i + width* j) * 3 + 1] = green;
	pixels[(i + width* j) * 3 + 2] = blue;
}

Geometry::Geometry(const int & width, const int & height)
{
	this->width = width;
	this->height = height;
	pixels = new float[width*height * 3];
}

bool Geometry::initiate()
{
	/* Initialize the library */
	if (!glfwInit())
		return false;

	/* Create a windowed mode window and its OpenGL context */
	window = glfwCreateWindow(width, height, "Hello World", NULL, NULL);
	if (!window)
	{
		glfwTerminate();
		return false;
	}

	/* Make the window's context current */
	glfwMakeContextCurrent(window);
	glClearColor(1, 1, 1, 1); // while background
	return true;
}

bool Geometry::terminate()
{
	glfwTerminate();
	return true;
}

void Geometry::drawLine(const int & i0, const int & j0, const int & i1, const int & j1, const float & red, const float & green, const float & blue)
{
	if (i0 == i1)
	{
		for (int y = j0; y < j1; y++)
		{
			drawPixel(i0, y, red, green, blue);
		}
	}

	else for (int i = i0; i <= i1; i++)
	{
		const int j = (j1 - j0)*(i - i0) / (i1 - i0) + j0;

		drawPixel(i, j, red, green, blue);
	}
}

bool Geometry::isinside(int x_c, int y_c, int length)
{
	int a = 0, b = 0;
	if (x_c - length < pos_x&&pos_x < x_c + length)a = 1;
	if (y_c - length < (height-pos_y)&&(height-pos_y) < y_c + length) b = 1;

	if (a == 1 && b == 1) return true;
	else return false;
	/*if (r < 40) return falsde;   //안의 원까지 색깔이 변하는 것을 방지.
	double TF = (pos_x - x_c)*(pos_x - x_c) + ((height - pos_y) - y_c)*((height - pos_y) - y_c) - r*r;
	if (TF > 0)return false;
	else return true;*/
}

int Geometry::getPosX()
{
	return pos_x;
}

int Geometry::getPosY()
{
	return pos_y;
}

Geometry::~Geometry()
{
	delete[] pixels;
}

bool Geometry::run()
{
	std::fill_n(pixels, width*height * 3, 1.0f);

	glfwGetCursorPos(window, &pos_x, &pos_y);
	//draw
	for (int i = 0; i < Icon.size(); i++)
	{
		Icon[i]->draw(this);
	}

	glDrawPixels(width, height, GL_RGB, GL_FLOAT, pixels);

	/* Swap front and back buffers */
	glfwSwapBuffers(window);

	/* Poll for and process events */
	glfwPollEvents();

	std::this_thread::sleep_for(std::chrono::milliseconds(100));	// white background

	if (glfwWindowShouldClose(window))
		return false;
	return true;
}

void Geometry::pushicon(IconElements & Icon)
{
	this->Icon.push_back(&Icon);
}
