#pragma once
#pragma once
#include<GLFW/glfw3.h>
#include<vector>
#include"Icon.h"
class IconElements;

class Geometry
{
private:
	GLFWwindow* window;
	int width, height;
	float *pixels;
	std::vector<IconElements*> Icon;
	double pos_x, pos_y;

public:
	Geometry(const int& width, const int& height);
	bool initiate();
	bool terminate();
	bool run();
	void pushicon(IconElements& Icon);
	void drawPixel(const int& i, const int& j, const float& red, const float& green, const float& blue);
	void drawLine(const int& i0, const int& j0, const int& i1, const int& j1, const float& red, const float& green, const float& blue);
	bool isinside(int x_c, int y_c, int length);
	int getPosX();
	int getPosY();
	~Geometry();
	/*const int width = 1500;
	const int height = 500;

	void drawOnPixelBuffer();

	void drawLine(const int& i0, const int& j0, const int& i1, const int& j1, const float& red, const float& green, const float& blue);
	void initialize(const int & x, const int & y, const int & r);
	void drawcircle(const int&i0, const int& j0, int r);
	virtual void draw(const int &x_c,const int &y_c,const int &r_c);*/
};