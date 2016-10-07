#pragma once
#pragma once
#include"Geometry.h"
class Geometry;

class IconElements
{
private:
	float r, g, b;
protected:
	int x, y, width, height;
public:
	IconElements(
		const int& x, const int& y,
		const int& width, const int & height,
		const float& r, const float& g, const float &b);
	virtual void draw(Geometry* geometry);
};

class Icon_t1 : public IconElements
{
public:Icon_t1(const int& x, const int& y,
	const int& width, const int & height,
	const float& r, const float& g, const float &b);

	   virtual void draw(Geometry* geometry);
};

class Icon_t2 : public IconElements
{
public:Icon_t2(const int& x, const int& y,
	const int& width, const int & height,
	const float& r, const float& g, const float &b);

	   virtual void draw(Geometry* geometry);
};

class Icon_t3 : public IconElements
{
public:Icon_t3(const int& x, const int& y,
	const int& width, const int & height,
	const float& r, const float& g, const float &b);

	   virtual void draw(Geometry* geometry);
};

class Icon_t4 : public IconElements
{
public:Icon_t4(const int& x, const int& y,
	const int& width, const int & height,
	const float& r, const float& g, const float &b);

	   virtual void draw(Geometry* geometry);
};

class Icon_t5 : public IconElements
{
public:Icon_t5(const int& x, const int& y,
	const int& width, const int & height,
	const float& r, const float& g, const float &b);

	   virtual void draw(Geometry* geometry);
};

class Icon_t6 : public IconElements
{
public:Icon_t6(const int& x, const int& y,
	const int& width, const int & height,
	const float& r, const float& g, const float &b);

	   virtual void draw(Geometry* geometry);
};

class Icon_t7 : public IconElements
{
public:Icon_t7(const int& x, const int& y,
	const int& width, const int & height,
	const float& r, const float& g, const float &b);

	   virtual void draw(Geometry* geometry);
};

class Icon_t8 : public IconElements
{
public:Icon_t8(const int& x, const int& y,
	const int& width, const int & height,
	const float& r, const float& g, const float &b);

	   virtual void draw(Geometry* geometry);
};

class Icon_t9 : public IconElements
{
public:Icon_t9(const int& x, const int& y,
	const int& width, const int & height,
	const float& r, const float& g, const float &b);

	   virtual void draw(Geometry* geometry);
};

class Icon_t10 : public IconElements
{
public:Icon_t10(const int& x, const int& y,
	const int& width, const int & height,
	const float& r, const float& g, const float &b);

	   virtual void draw(Geometry* geometry);
};
