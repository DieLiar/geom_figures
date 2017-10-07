#include "Stack.h"
Stack::Stack(int maxsize)
{
	this->maxsize = maxsize;
	top = -1;
	a = new TElem[maxsize];
}
//*************************************
Stack::Stack (const Stack &st)
{
	maxsize = st.maxsize;
	top = st.top;
	a = new TElem[maxsize];
	
	for(int i=0; i<top+1; i++)
	{
		a[i] = st.a[i];
	}
}
//************************************
Stack::~Stack()
{
	delete[]a;
}
//******************************************
bool Stack::IsEmpty()const
{
	return top == -1;
}

bool Stack::IsFull()const
{
	return top == maxsize-1;
}
//*************************************
void Stack::Push(TElem c)
{
	if(IsFull()){
		return;}

	a[++top] = c;
}
//****************************************
TElem Stack::Pop()
{
	if(IsEmpty())	return 0;

	return a[top--];
}