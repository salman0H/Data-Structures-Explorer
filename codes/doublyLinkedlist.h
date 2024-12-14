#ifndef DOUBLYLINKEDLIST_H
#define DOUBLYLINKEDLIST_H

#include <iostream>
#include "node.h"

class doublyLinkedList
{
public:
    doublyLinkedList()
    {
        head = NULL;
    }
    doublyLinkedList(node *n)
    {
        head = n;
    }
    ///check if node exist using key value
    node* checkIfNodeExist(int k)
    {
        node *temp =  NULL;
        node *ptr = head;

        while(ptr != NULL)
        {
            if(ptr -> getKey() == k)
            {
                temp = ptr;
            }
            ptr = ptr -> getNext();
        }
        return temp;
    }
private:
    node *head;
};
#endif