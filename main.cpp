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
                cout << "NULL" << endl; // نشان دادن انتهای لیست
            }
        }
    }
private:
    node *head;
};
int main()
{
    singlyLinkedList sll;
    int option, key, data, afterKey;

    do {
        cout << "\n=== Singly Linked List Menu ===\n";
        cout << "1. Append Node\n";
        cout << "2. Prepend Node\n";
        cout << "3. Insert Node After\n";
        cout << "4. Delete Node By Key\n";
        cout << "5. Update Node By Key\n";
        cout << "6. Display List\n";
        cout << "7. Exit\n";
        cout << "Choose an option: ";
        cin >> option;

        switch (option) {
        case 1:
            cout << "Enter key and data of the node to append: ";
            cin >> key >> data;
            cout << "[DEBUG] Append Node: key=" << key << ", data=" << data << endl;
            sll.appendNode(new node(key, data));
            break;

        case 2:
            cout << "Enter key and data of the node to prepend: ";
            cin >> key >> data;
            cout << "[DEBUG] Prepend Node: key=" << key << ", data=" << data << endl;
            sll.prependNode(new node(key, data));
            break;

        case 3:
            cout << "Enter the key of the node after which to insert: ";
            cin >> afterKey;
            cout << "Enter key and data of the new node: ";
            cin >> key >> data;
            cout << "[DEBUG] Insert Node After: afterKey=" << afterKey << ", key=" << key << ", data=" << data << endl;
            sll.insertNodeAfter(afterKey, new node(key, data));
            break;

        case 4:
            cout << "Enter the key of the node to delete: ";
            cin >> key;
            cout << "[DEBUG] Delete Node By Key: key=" << key << endl;
            sll.deleteNodeByKey(key);
            break;

        case 5:
            cout << "Enter the key of the node to update: ";
            cin >> key;
            cout << "Enter new data for the node: ";
            cin >> data;
            cout << "[DEBUG] Update Node By Key: key=" << key << ", new data=" << data << endl;
            sll.updateNodeByKey(key, data);
            break;

        case 6:
            cout << "[DEBUG] Display List\n";
            sll.display();
            break;

        case 7:
            cout << "Exiting program." << endl;
            cout << "[DEBUG] Program Exit\n";
            break;

        default:
            cout << "Invalid option. Please try again." << endl;
            cout << "[DEBUG] Invalid Option Entered: " << option << endl;
        }

    } while (option != 7);

    return 0;
}

