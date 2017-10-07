#include "Matem.h"
#include "Point.h"
#include <math.h>

double Matem::Dist(Point a, Point b)
{
	return sqrt((a.x - b.x)*(a.x - b.x) + (a.y - b.y)*(a.y - b.y));
}