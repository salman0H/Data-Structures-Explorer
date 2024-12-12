#ifndef NODE_H
#define NODE_H

#include <iostream>
#include <string>

using namespace std;

class node
{
public:
    node()
    {
        key = 0;
        data = 0;
        next = NULL;
    }
    node(int _key, int _data)
    {
        key = _key;
        data = _data;
    }
    int getKey()
    {
        return key;
    }
    int& getData()
    {
        return data;
    }
    node*& getNext()
    {
        return next;
    }
private:
    int key;
    int data;
    node *next;
};

#endif