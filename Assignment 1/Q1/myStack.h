// Charlie Orch
#ifndef STACK_H
#define STACK_H
#define MAX 1000
#include <iostream>
using namespace std;

using namespace std;

//*****************************************************************
//*****************************************************************
//*************Stack Template Class Declaration********************
//*****************************************************************
//*****************************************************************

template <class T>
class myStack
{
	public:
		myStack();
		bool push(T x);
		T pop();
		bool isEmpty() const;
		bool isFull() const;

	private:
    	int top; //Index of the element on the top of the Stack
    	T data[MAX];    //The array storing elements in the Stack
};


//*****************************************************************
//*****************************************************************
//*************Stack Template Implementation***********************
//*****************************************************************
//*****************************************************************

template <class T>
myStack<T>::myStack()
{
    //Initialize int top
    top = 0;
}

template <class T>
bool myStack<T>::push(T x)
{
   //Push element x into the stack
   if (isEmpty())
   {
		 	 top++;
       data[top] = x;

       return true;
   }

   else
   {
       cout << "The stack is full.";
       return false;
   }
}

template <class T>
T myStack<T>::pop()
{
  //Pop the top element out from the stack, and return it
		T num = data[top];
		top--;
		return num;
}

template <class T>
bool myStack<T>::isEmpty() const
{
    //if empty, return true; otherwise, return false
    if (top < MAX)
    {
        return true;
    }
    else
    {
        return false;
    }
}

template <class T>
bool myStack<T>::isFull() const
{
    //if full, return true; otherwise, return falsef
    if (top == MAX)
    {
        return true;
    }
    else
    {
        return false;
    }
}
#endif // STACK_H
