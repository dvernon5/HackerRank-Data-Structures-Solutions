/*
 * Complete the 'sortedInsert' function below.
 *
 * The function is expected to return an INTEGER_DOUBLY_LINKED_LIST.
 * The function accepts following parameters:
 *  1. INTEGER_DOUBLY_LINKED_LIST llist
 *  2. INTEGER data
 */

/*
 * For your reference:
 *
 * DoublyLinkedListNode {
 *     int data;
 *     DoublyLinkedListNode* next;
 *     DoublyLinkedListNode* prev;
 * };
 *
 */


DoublyLinkedListNode* sortedInsert(DoublyLinkedList* llist, int data) {
    DoublyLinkedListNode* headNode = llist
    DoublyLinkedListNode* newNode = nullptr;
    
    if (llist == nullptr) 
    {
        newNode = (DoublyLinkedListNode*)calloc(0, sizeof(DoublyLinkedListNode));
        newNode->data = data;
        newNode->prev = nullptr;
        newNode->next = nullptr;    
        headNode = newNode;
    } else if (llist != nullptr) {
        while (llist->data < data && llist->next != nullptr)
        {
            llist = llist->next;    
        }
        if (llist == headNode)
        {
            newNode = (DoublyLinkedListNode*)calloc(0, sizeof(DoublyLinkedList));
            newNode->data = data;
            newNode->prev = nullptr;
            newNode->next = llist;
            llist->prev = newNode;
            headNode = newNode;
        } else if (data < llist->data) { 
            llist = llist->prev;
            newNode = (DoublyLinkedListNode*)calloc(0, sizeof(DoublyLinkedList));
            newNode->data = data;
            newNode->prev = llist->prev;
            newNode->next = llist;
            llist->next->prev = newNode;
            llist->next = newNode;
        } else {
            newNode = (DoublyLinkedListNode*)calloc(0, sizeof(DoublyLinkedListNode));
            newNode->data = data;
            newNode->prev = llist;
            newNode->next = llist->next;
            llist->next = newNode;
        }
    }

    return headNode;
}
