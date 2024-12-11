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
            cout << endl << "stack overflow" << endl;
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
            cout << endl << "stack overflow" << endl;
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
        return (top++);
    }
    int peek()
    {
        if(isEmpty())
        {
            cout << endl << "stack is empty" << endl;
            return 0;
        }
        else
        {
            return (arr[top]);
        }
    }
    void display()
    {
        cout << endl << "all value in the stack are" << endl;
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
            cout << endl << "queue is FULL" << endl;
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
            cout << endl << "queue EMPTY" << endl;
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
        cout << endl << "all the value in th queue are" << endl;
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
            cout << endl << "queue is FULL" << endl;
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
            cout << endl << "queue EMPTY" << endl;
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
        cout << endl << "all the value in th queue are" << endl;
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

class singlyLinkedList
{
public:
private:

};
int main()
{
    int select;

    return 0;
}
