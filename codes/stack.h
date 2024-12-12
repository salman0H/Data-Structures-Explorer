#ifndef STACK_H
#define STACK_H

#include <iostream>
#include <string>

using namespace std;

class Stack
{
public:
    Stack()
    {
        top = -1;
        for(int i=0;i<5;i++)
        {
            arr[i] = 0;
        }
    }
    bool isEmpty()
    {
        return ((top == -1 ? true : false));
    }
    bool isFull()
    {
        return ((top == 4 ? true : false));
    }
    void push(int value)
    {
        if(isFull())
        {
            cout << "stack overflow" << endl;
        }
        else
        {
            top++;
            arr[top] = value;
        }
    }
    int pop()
    {
        if(isEmpty())
        {
            cout << "stack overflow" << endl;
            return 0;
        }
        else
        {
            int popValue = arr[top];
            arr[top] = 0;
            top--;
            return popValue;
        }
    }
    int countStack()
    {
        return (top + 1);
    }
    int peek()
    {
        if(isEmpty())
        {
            cout << "stack is empty" << endl;
            return 0;
        }
        else
        {
            return (arr[top]);
        }
    }
    void display()
    {
        cout << "all value in the stack are" << endl;
        cout << " ---------------" << endl;
        for(int i=4;i>=0;i--)
        {
            cout << '|' << '\t' << arr[i] << '\t' << '|' << endl;
        }
        cout << " ---------------" << endl;
    }

private:
    int top;
    int arr[5];
};

#endif