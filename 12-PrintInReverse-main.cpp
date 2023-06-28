#include<iostream>

using namespace std;

class SinglyLinkedListNode {
    public:
        int data;
        SinglyLinkedListNode *next;

        SinglyLinkedListNode(int node_data) {
            this->data = node_data;
            this->next = nullptr;
        }
};

/*
 * Complete the 'reversePrint' function below.
 *
 * The function accepts INTEGER_SINGLY_LINKED_LIST llist as parameter.
 */

void reversePrint(SinglyLinkedListNode* llist) {
    
    if(llist != nullptr)
    {
        reversePrint(llist->next);
        cout << llist->data << endl;
    }
}

