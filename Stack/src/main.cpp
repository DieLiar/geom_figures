#include <iostream>
#include"Stack.h"

using namespace std;

void main()
{
	const int count = 5;
	Stack stack(count);

	for(int i=0; i<count; i++)
	{
		cout<< i << " ";
		stack.Push(i);
	}
	cout<< endl;
	
	for(int i=0; i<count; i++)
	{
		TElem c = stack.Pop();
		cout<< c << " ";
	}
	cout<< endl;

	Stack stack1(count);
	for(int i=0; i<count; i++)
	{
		cout<< i << " ";
		stack.Push(i);
	}
	cout<< endl;
	Stack stak(stack1);
	for(int i=0; i<count; i++)
	{
		TElem c = stack.Pop();
		cout<< c << " ";
	}
	cout<< endl;

}