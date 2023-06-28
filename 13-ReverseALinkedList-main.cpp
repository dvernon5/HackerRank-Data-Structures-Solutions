#include <iostream>

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
 * Complete the 'reverse' function below.
 *
 * The function is expected to return an INTEGER_SINGLY_LINKED_LIST.
 * The function accepts INTEGER_SINGLY_LINKED_LIST llist as parameter.
 */

SinglyLinkedListNode* reverse(SinglyLinkedListNode* llist) {
    SinglyLinkedListNode* tailNode = nullptr, *backNode = nullptr;
    SinglyLinkedListNode* ptrNode = llist;
    
    while (ptrNode != nullptr)
    {
        backNode = tailNode;
        tailNode = ptrNode;
        ptrNode = ptrNode->next;
        tailNode->next = backNode;
    }
    
    llist = tailNode;
    
    return llist;
}
