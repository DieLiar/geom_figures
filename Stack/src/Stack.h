#ifndef STACK_H
#define STACK_H
typedef int TElem;
class Stack
{
private:
	int maxsize;
	int top;
	TElem *a;
public:
	Stack(int maxsize);
	Stack(const Stack &st);
	~Stack();
	void Push(TElem c);
	TElem Pop();
	bool IsEmpty()const;
	bool IsFull()const;
};
#endif