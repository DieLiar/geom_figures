#include "Rect.h"
#include "Point.h"
#include "Matem.h"
#include <iostream>

using namespace std;

Rect::Rect(Point a, Point b, Point c)
{
	this->a = a;
	this->b = b;
	this->c = c;
}

void Rect::draw()
{
	cout<< a.x <<" "<< a.y << endl;
	cout<< b.x <<" "<< b.y << endl;
	cout<< c.x <<" "<< c.y << endl;
}

double Rect::S()
{
	return Matem::Dist(a, b) * Matem::Dist(b,c);
}

double Rect::P()
{
	return (2*(Matem::Dist(a, b) + Matem::Dist(b,c)));
}