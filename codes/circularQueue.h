#ifndef CIRCULARQUEUE_H
#define CIRCULARQUEUE_H

#include <iostream>
#include <string>

using namespace std;

class circularQueue
{
public:
    circularQueue()
    {
        front = -1;
        rear = -1;
        itemCount = 0;
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
        return ((((rear + 1) % 5 == front)) ? true : false);
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
            itemCount++;
        }
        else
        {
            for(int i=1;i<5;i++)
            {
                arr[i] = arr[i + 1];
            }
            rear = (rear + 1) % 5;
            arr[rear] = value;
            itemCount++;
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
            itemCount--;
            return popValue;
        }
        else
        {
            popValue = arr[front];
            arr[front] = 0;
            front = (front + 1) % 5;
            itemCount--;
            return popValue;
        }
    }
    int count()
    {
        return (itemCount);
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
        cout << "count : " <<  count() << endl;

    }

private:
    int front;
    int rear;
    int arr[5];
    int itemCount;
};

#endif
