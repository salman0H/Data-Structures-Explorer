#ifndef QUEUE_H
#define QUEUE_H

#include <iostream>
#include <string>

using namespace std;

class Queue
{
public:
    Queue()
    {
        front = -1;
        rear = -1;
        for(int i=0;i<5;i++)
        {
            arr[i] = 0;
        }
    }
    bool isEmpty()
    {
       return ((front == -1 && rear == -1) ? true : false);
    }
    bool isFull()
    {
        return ((front == 0 && rear == (5 - 1)) ? true : false);

    }
    int countQueue()
    {
        return (rear);
    }
    void push(int value)
    {
        if(isFull())
        {
            cout << "queue is FULL" << endl;
            return;
        }
        else if(isEmpty()) ///why add rear and front? frint --> first one
        {
            rear = 0;
            front = 0;
            arr[rear] = value;
        }
        else
        {
            for(int i=1;i<5;i++)
            {
                arr[i] = arr[i + 1];
            }
            rear++;
            arr[rear] = value;
        }
    }
    int pop()
    {
        int popValue = 0;
        if(isEmpty())
        {
            cout << "queue EMPTY" << endl;
            return 0;
        }
        else if(front == rear)
        {
            popValue = arr[front];
            arr[front] = 0;
            front = -1;
            rear = -1;
            return popValue;
        }
        else
        {
            popValue = arr[front];
            arr[front] = 0;
            front++;
            return popValue;
        }
    }
    void display()
    {
        cout << "all the value in th queue are" << endl;
        cout << " rear ";
        for(int i=4;i>=0;i--)
        {
            if(arr[i] == 0)
            {
                continue;
            }
            cout << '|' << arr[i] << '|' ;
        }
        cout << " front " << endl;

    }
private:
    int front; ///head
    int rear; ///back
    int arr[5];
};

#endif