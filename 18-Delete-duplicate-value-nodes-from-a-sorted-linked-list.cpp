/*
 * Complete the 'removeDuplicates' function below.
 *
 * The function is expected to return an INTEGER_SINGLY_LINKED_LIST.
 * The function accepts INTEGER_SINGLY_LINKED_LIST llist as parameter.
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

SinglyLinkedListNode* removeDuplicates(SinglyLinkedListNode* llist) {
    if (llist == nullptr)
    {
        return llist;
    } else if (llist->next == nullptr) {
        return llist;
    }

    SinglyLinkedListNode *ptrNode = llist; 
    SinglyLinkedListNode *fastNode = llist->next;

    while (fastNode != nullptr) 
    {
        if (ptrNode->data != fastNode->data)
        {
            ptrNode = fastNode;
            fastNode = fastNode->next;
        } else {
            ptrNode->next = fastNode->next;
            delete (fastNode);
            fastNode = ptrNode->next;
    }

    return llist;
}
