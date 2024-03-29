#include <bits/stdc++.h>

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

class SinglyLinkedList {
    public:
        SinglyLinkedListNode *head;
        SinglyLinkedListNode *tail;

        SinglyLinkedList() {
            this->head = nullptr;
            this->tail = nullptr;
        }

        void insert_node(int node_data) {
            SinglyLinkedListNode* node = new SinglyLinkedListNode(node_data);

            if (!this->head) {
                this->head = node;
            } else {
                this->tail->next = node;
            }

            this->tail = node;
        }
};

void print_singly_linked_list(SinglyLinkedListNode* node, string sep, ofstream& fout) {
    while (node) {
        fout << node->data;

        node = node->next;

        if (node) {
            fout << sep;
        }
    }
}

void free_singly_linked_list(SinglyLinkedListNode* node) {
    while (node) {
        SinglyLinkedListNode* temp = node;
        node = node->next;

        free(temp);
    }
}

/*
 * Complete the 'insertNodeAtPosition' function below.
 *
 * The function is expected to return an INTEGER_SINGLY_LINKED_LIST.
 * The function accepts following parameters:
 *  1. INTEGER_SINGLY_LINKED_LIST llist
 *  2. INTEGER data
 *  3. INTEGER position
 */

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */

int countingNodes(SinglyLinkedListNode* llist)
 {
     int counter = 0;
     
     while (llist != nullptr)
     {
         counter++;
         llist = llist->next;
     }
     
     return counter;
 }

SinglyLinkedListNode* insertNodeAtPosition(SinglyLinkedListNode* llist, int data, int position) {
    if ( position < 0 || position > countingNodes(llist) )
    {
        return nullptr;
    }
    
    SinglyLinkedListNode* newNode = nullptr, *ptrNode = llist;
    
    newNode = ( SinglyLinkedListNode * )calloc( 1, sizeof( SinglyLinkedListNode ) );
    newNode->data = data;
    newNode->next = nullptr;
    
    if ( llist == nullptr )
    {
        llist = ptrNode = newNode;
    }
    
    if (position == 0)
    {
        newNode->next = llist;
        llist = newNode;
    }
    else if (position > 0)
    {
        for (int i = 0; i < position - 1; i++)
        {
            ptrNode = ptrNode->next;
        }
        newNode->next = ptrNode->next;
        ptrNode->next = newNode;
        ptrNode = newNode;
    }
    
    return llist;
}
