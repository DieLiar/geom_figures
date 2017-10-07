#include "Figure.h"
#include "Point.h"
#include "Rect.h"
#include <iostream>
using namespace std;
void main()
{
	const int numObjects = 3;
	figure ** object = new figure*[numObjects];
	object[0] = new Point(2.5, -2.5);
	object[1] = new Rect (Point(0.0, 1.0), Point(0.0, 0.0), Point(2.5, 0.0));
	object[2] = new Point (3.4, 5.6);
	
	for(int i =0; i<numObjects; i++)
	{
		cout<< "i = "<< i << ":" << endl;
		object[0] -> draw();
		cout<< " S = " << object[i] ->S()<<endl;
		cout<< " P = " << object[i] ->P()<<endl;
	}
	
	for(int i =0; i<numObjects; i++)
	{
		delete object[i];
	}
	delete [] object;
}