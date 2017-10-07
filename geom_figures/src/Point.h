#ifndef POINT_H
#define POINT_H
#include "figure.h"
class Point:public figure
{
public:
	double x;
	double y;
	Point(){};
	Point(double x, double y);
	virtual void draw();
	virtual double S();
	virtual double P();
	//friend class Rect; //если х и у в privet
};
#endif
