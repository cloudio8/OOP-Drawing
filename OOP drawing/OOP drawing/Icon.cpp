#include "Icon.h"
#include"Geometry.h"
#include<iostream>
#include<math.h>

IconElements::IconElements(const int & x, const int & y, const int & width, const int & height, const float & r, const float & g, const float & b)
{
	this->x = x; this->y = y; this->width = width; this->height = height; this->r = r; this->g = g; this->b = b;
}

void IconElements::draw(Geometry* geometry)
{
	int x = this->width / 2;
	int y = 0;
	int err = 0;
	if (geometry->isinside(this->x, this->y, x)) {
		r = 0.0f; g = 0.0f; b = 1.0f;
	}
	else r = 1.0f, g = 0.0f, b = 0.0f;

	while (x >= y)
	{
		geometry->drawPixel(this->x + x, this->y + y, this->r, this->g, this->b);
		geometry->drawPixel(this->x + y, this->y + x, this->r, this->g, this->b);
		geometry->drawPixel(this->x - y, this->y + x, this->r, this->g, this->b);
		geometry->drawPixel(this->x - x, this->y + y, this->r, this->g, this->b);
		geometry->drawPixel(this->x - x, this->y - y, this->r, this->g, this->b);
		geometry->drawPixel(this->x - y, this->y - x, this->r, this->g, this->b);
		geometry->drawPixel(this->x + y, this->y - x, this->r, this->g, this->b);
		geometry->drawPixel(this->x + x, this->y - y, this->r, this->g, this->b);
		y += 1;
		err += 1 + 2 * y;
		if (2 * (err - x) + 1 > 0)
		{
			x -= 1;
			err += 1 - 2 * x;
		}

	}
}

Icon_t1::Icon_t1(const int & x, const int & y, const int & width, const int & height, const float & r, const float & g, const float & b) :IconElements(x, y, width, height, r, g, b)
{}
Icon_t2::Icon_t2(const int & x, const int & y, const int & width, const int & height, const float & r, const float & g, const float & b) : IconElements(x, y, width, height, r, g, b)
{}
Icon_t3::Icon_t3(const int & x, const int & y, const int & width, const int & height, const float & r, const float & g, const float & b) : IconElements(x, y, width, height, r, g, b)
{}
Icon_t4::Icon_t4(const int & x, const int & y, const int & width, const int & height, const float & r, const float & g, const float & b) : IconElements(x, y, width, height, r, g, b)
{}
Icon_t5::Icon_t5(const int & x, const int & y, const int & width, const int & height, const float & r, const float & g, const float & b) : IconElements(x, y, width, height, r, g, b)
{}
Icon_t6::Icon_t6(const int & x, const int & y, const int & width, const int & height, const float & r, const float & g, const float & b) : IconElements(x, y, width, height, r, g, b)
{}
Icon_t7::Icon_t7(const int & x, const int & y, const int & width, const int & height, const float & r, const float & g, const float & b) : IconElements(x, y, width, height, r, g, b)
{}
Icon_t8::Icon_t8(const int & x, const int & y, const int & width, const int & height, const float & r, const float & g, const float & b) : IconElements(x, y, width, height, r, g, b)
{}
Icon_t9::Icon_t9(const int & x, const int & y, const int & width, const int & height, const float & r, const float & g, const float & b) : IconElements(x, y, width, height, r, g, b)
{}
Icon_t10::Icon_t10(const int & x, const int & y, const int & width, const int & height, const float & r, const float & g, const float & b) : IconElements(x, y, width, height, r, g, b)
{}

void Icon_t1::draw(Geometry * geometry)
{
	IconElements::draw(geometry);
	geometry->drawLine(x - 30, y - 30, x + 30, y + 30, 1.0f, 0.0f, 0.0f);
	geometry->drawLine(x - 30, y - 31, x + 30, y + 30, 1.0f, 0.0f, 0.0f);
	geometry->drawLine(x - 30, y - 29, x + 30, y + 30, 1.0f, 0.0f, 0.0f);

}
void Icon_t2::draw(Geometry * geometry)
{
	IconElements::draw(geometry);
	geometry->drawLine(x, y, x, y + 50, 1.0f, 0.0f, 0.0f);
	geometry->drawLine(x - 0.5 * 50 * pow(3, 0.5), y - 25, x, y, 1.0f, 0.0f, 0.0f);
	geometry->drawLine(x, y, x + 0.5 * 50 * pow(3, 0.5), y - 25, 1.0f, 0.0f, 0.0f);
}
void Icon_t3::draw(Geometry * geometry)
{
	IconElements::draw(geometry);
	geometry->drawLine(x - 27, y - 27, x - 27, y + 27, 1.0f, 0.0f, 0.0f);
	geometry->drawLine(x + 27, y - 27, x + 27, y + 27, 1.0f, 0.0f, 0.0f);
	geometry->drawLine(x - 27, y - 27, x + 27, y - 27, 1.0f, 0.0f, 0.0f);
	geometry->drawLine(x - 27, y + 27, x + 27, y + 27, 1.0f, 0.0f, 0.0f);
}
void Icon_t4::draw(Geometry * geometry)
{
	IconElements::draw(geometry);
	geometry->drawLine(x - 30, y - 30, x + 30, y + 30, 1.0f, 0.0f, 0.0f);
	geometry->drawLine(x - 30, y + 30, x + 30, y - 30, 1.0f, 0.0f, 0.0f);
}
void Icon_t5::draw(Geometry * geometry)
{
	IconElements::draw(geometry);
	geometry->drawLine(x, y - 25, x, y + 25, 1.0f, 0.0f, 0.0f);
	geometry->drawLine(x, y - 25, x + 10, y - 15, 1.0f, 0.0f, 0.0f);
	geometry->drawLine(x - 10, y - 15, x, y - 25, 1.0f, 0.0f, 0.0f);
}
void Icon_t6::draw(Geometry * geometry)
{
	IconElements::draw(geometry);
	geometry->drawLine(x - 25, y, x + 25, y, 1.0f, 0.0f, 0.0f);
	geometry->drawLine(x + 15, y + 10, x + 25, y, 1.0f, 0.0f, 0.0f);
	geometry->drawLine(x + 15, y - 10, x + 25, y, 1.0f, 0.0f, 0.0f);

}
void Icon_t7::draw(Geometry * geometry)
{
	IconElements::draw(geometry);
	geometry->drawLine(x - 20, y - 20, x, y + 20, 1.0f, 0.0f, 0.0f);
	geometry->drawLine(x - 20, y - 21, x, y + 19, 1.0f, 0.0f, 0.0f);
	geometry->drawLine(x, y + 20, x + 20, y - 20, 1.0f, 0.0f, 0.0f);
	geometry->drawLine(x, y + 19, x + 20, y - 21, 1.0f, 0.0f, 0.0f);
	geometry->drawLine(x - 10, y, x + 10, y, 1.0f, 0.0f, 0.0f);
}
void Icon_t8::draw(Geometry * geometry)
{
	IconElements::draw(geometry);
	geometry->drawLine(x, y - 30, x, y + 30, 1.0f, 0.0f, 0.0f);
	geometry->drawLine(x - 30, y, x + 30, y, 1.0f, 0.0f, 0.0f);
}
void Icon_t9::draw(Geometry * geometry)
{
	IconElements::draw(geometry);
	geometry->drawLine(x - 25, y, x + 25, y, 1.0f, 0.0f, 0.0f);
	geometry->drawLine(x - 25, y, x - 15, y + 10, 1.0f, 0.0f, 0.0f);
	geometry->drawLine(x - 25, y, x - 15, y - 10, 1.0f, 0.0f, 0.0f);
}
void Icon_t10::draw(Geometry * geometry)
{
	IconElements::draw(geometry);
	geometry->drawLine(x, y - 25, x, y + 25, 1.0f, 0.0f, 0.0f);
	geometry->drawLine(x - 10, y + 15, x, y + 25, 1.0f, 0.0f, 0.0f);
	geometry->drawLine(x, y + 25, x + 10, y + 15, 1.0f, 0.0f, 0.0f);
}