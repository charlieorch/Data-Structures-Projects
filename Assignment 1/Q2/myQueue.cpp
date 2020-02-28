// Charlie Orch
#include "myQueue.h"
#include <iostream>
using namespace std;

myQueue::myQueue()
{
    //initialize the value of the rear and front indicator based on your implementation.
    rear = 0;
    front = 0;
}


bool myQueue::push(int x)
{

    if(!isFull())
    {
        //Todo:
            //Check if the queue is full or not.

            //If so, insert an item into the back of the myQueue.
            //Update the value of the front indicator
            //Otherwise, print a meaningful error message
            holder[rear] = x;
            rear++;
            return true;
    }
    else
    {
        //Todo: print a meaningfull message
        cout << "The queue is full and the item will not be added" << endl;
        return false;

    }
}

int myQueue::pop()
{
     //Todo:
        //Remove the front item from the myQueue
        //Update the value of the rear indicator
        int item = holder[front];
        front++;
        return item;
}

bool myQueue::isFull()
{
    //Check if the myQueue still has empty space at its rear or the front.
    bool status = false;

    if (rear == MAX)
    {
        status = true;
    }
    return status;
}

bool myQueue::isEmpty()
{
    //Check if the myQueue is empty based on the value of the front and rear indicator.
    bool status = false;

    if (front == rear)
    {
        status = true;
    }
    return status;
}


void myQueue::print()
{
	//Todo: print all items of the myQueue.
	//Hint: use a variable to store a copy of the front value. itterate over the queue until you reached
	//to the rear element.
    int theFront = front;

    cout << "The queue is: ";

    for (int i = front; i!= rear; i++)
    {
        cout << holder[i];
        if (i != (rear - 1))
        {
            cout << ", ";
        }
    }
    cout << "\n";
}
