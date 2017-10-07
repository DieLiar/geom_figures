#include "Point.h"
#include "figure.h"
#include <stdio.h>
#include<iostream>
Point::Point(double x, double y)
{
	this->x = x;
	this->y = y;
}
void Point::draw()
{
std::cout<< x <<" "<< y << std::endl;
}
double Point::S()
{
	return 0.0;  //сразу double
}

double Point::P()
{
	return 0.0; // ~
}