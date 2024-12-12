#include <iostream>
#include <string>
#include "codes/stack.h"
#include "codes/queue.h"
#include "codes/circularQueue.h"
#include "codes/node.h"
#include "codes/singlyLinkedList.h"

using namespace std;

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

