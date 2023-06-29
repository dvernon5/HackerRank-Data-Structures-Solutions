/*
 * Complete the 'reverse' function below.
 *
 * The function is expected to return an INTEGER_DOUBLY_LINKED_LIST.
 * The function accepts INTEGER_DOUBLY_LINKED_LIST llist as parameter.
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

void swapElement(DoublyLinkedListNode* Element1, DoublyLinkedListNode* Element2) {
    DoublyLinkedListNode temp = *Element1;
    *Element1 = *Element2;
    *Element2 = temp;
}

DoublyLinkedListNode* reverse(DoublyLinkedListNode* llist) {
    DoublyLinkedListNode* headNode = llist, *temporaryNode;

    if (llist == nullptr)
    {
        return nullptr;
    } else if (llist != nullptr) {
        while (llist != nullptr) 
        {
            if (llist->next == nullptr) 
            {
                headNode = llist;
                temporaryNode = llist->next;
                llist->next = llist->prev;
                llist->prev = temporaryNode;
                llist = llist->prev;
            } else {
                temporaryNode = llist->next;
                llist->next = llist->prev;
                llist->prev = temporaryNode;
                llist = llist->prev
            }
        }
    }

    return headNode;
}
