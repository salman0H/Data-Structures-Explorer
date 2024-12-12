#ifndef SINGLYLINKEDLIST_H
#define SINGLYLINKEDLIST_H

#include <iostream>
#include <string>
#include "node.h"

using namespace std;

class singlyLinkedList
{
public:
    singlyLinkedList()
    {
        head = NULL;
    }
    singlyLinkedList(node *_head)
    {
        head = _head;
    }
    ///check node exists
    node* nodeExists(int k)
    {
        node *temp = NULL;
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
    ///append a new node
    void appendNode(node *n)
    {
        if(nodeExists(n -> getKey() != NULL))
        {
           cout << "Node already exist with key value :"
                << n -> getKey() << ". append another node with different key value"<< endl;
        }
        else
        {
            if(head == NULL)
            {
                head  = n;
                cout << "Node appended." << endl;
            }
            else if(head != NULL)
            {
                node *ptr = head;
                while((ptr -> getNext()) != NULL)
                {
                    ptr = ptr -> getNext();
                }
                ptr -> getNext() = n;
                cout << "Node appended." << endl;
            }
        }
    }
    ///prepend node - attach a node at the start
    void prependNode(node *n)
    {
        if(nodeExists((n -> getKey()) != NULL))
        {
           cout << "Node already exist with key value :"
                << n -> getKey() << ". append another node with different key value"<< endl;
        }
        else
        {
            n -> getNext() = head;
            head = n;
            cout << "Node prepended." << endl;
        }
    }
    ///insert a node after a particular node in the list
    void insertNodeAfter(int k, node *n)
    {
        node *ptr = nodeExists(k);
        if(ptr == NULL)
        {
            cout << "No node exist with this value : " << k << endl;
        }
        else
        {
            if(nodeExists(n -> getKey() != NULL))
            {
                cout << "Node already exist with key value : " << n -> getKey()
                     << ". append another node with different key value" << endl;
            }
            else
            {
                n -> getNext() = ptr -> getNext();
                ptr -> getNext() = n;
                cout << "Node inserted." << endl;
            }
        }
    }
    ///delete node by unique key
    void deleteNodeByKey(int k)
    {
        if(head == NULL)
        {
            cout << "Singly linked list is already empty. can't delete." << endl;
        }
        else if(head != NULL)
        {
            if(head -> getKey() == k)
            {
                head = head -> getNext();
                cout << "Node unlinked with key value : " << k << endl;
            }
            else
            {
                node *temp = NULL;
                node *prevptr = head;
                node * currentptr = head -> getNext();
                while(currentptr != NULL)
                {
                    if(currentptr -> getKey() == k)
                    {
                        temp = currentptr;
                        currentptr = NULL;
                    }
                    else
                    {
                        prevptr = prevptr -> getNext();
                        currentptr = currentptr -> getNext();
                    }
                }
                if(temp != NULL)
                {
                    prevptr -> getNext() = temp -> getNext();
                    delete temp;
                    cout << "Node unlinked with key value : " << k << endl;
                }
                else
                {
                    cout << "Node doesn't exist with key value : " << k << endl;
                }

            }
        }
    }
    ///update node
    void updateNodeByKey(int k, int d)
    {
        node *ptr = nodeExists(k);
        if(ptr != NULL)
        {
            ptr -> getData() = d;
            cout << "Node data update successfully." << endl;
        }
        else
        {
            cout << "Node doesn't exist with key value : " << k << endl;
        }
    }
    ///display
    void display()
    {
        if(head == NULL)
        {
            cout << "Singly linked list is empty." << endl;
        }
        else
        {
            cout << "Singly linked list values : " << endl;
            node *temp = head;
            int counter = 0;
            while(temp != NULL && counter < 1000)
            {
                cout << '(' << temp -> getKey() << ',' << temp -> getData() << ')'
                     << " --> ";
                temp = temp -> getNext();
                counter++;
            }
            if (counter >= 1000) {
                cout << "Error: Loop detected or too many nodes in the list." << endl;
            } else {
                cout << "NULL" << endl;
            }
        }
    }
private:
    node *head;
};

#endif