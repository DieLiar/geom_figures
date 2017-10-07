#ifndef RECT_H
#define RECT_H

#include "Point.h"
#include "figure.h"

class Rect : public figure
{
private:
	Point a;
	Point b;
	Point c;
public:
	Rect(){};
	Rect(Point a, Point b, Point c);
	virtual void draw();
	virtual double S();
	virtual double P();
};
#endif