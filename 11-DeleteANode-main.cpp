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
 * Complete the 'deleteNode' function below.
 *
 * The function is expected to return an INTEGER_SINGLY_LINKED_LIST.
 * The function accepts following parameters:
 *  1. INTEGER_SINGLY_LINKED_LIST llist
 *  2. INTEGER position
 */

SinglyLinkedListNode* deleteNode(SinglyLinkedListNode* llist, int position) {
    SinglyLinkedListNode* ptrNode = llist, *tailNode = nullptr;
    
    if ( position == 0 )
    {
        if (llist->next == nullptr)
        {
            delete llist;
            return nullptr;
        }
        else if (llist->next != nullptr)
        {
            llist = llist->next;
            delete ptrNode;
        }
    }
    else if ( position > 0 )
    {
        for (int i = 0; i < position; ++i)
        {
            tailNode = ptrNode;
            ptrNode = ptrNode->next;
        }
        
        
            tailNode->next = ptrNode->next;
            delete ptrNode;
        
    }
    
    return llist;
}
