/*
 * Complete the 'getNode' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER_SINGLY_LINKED_LIST llist
 *  2. INTEGER positionFromTail
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

int getNode(SinglyLinkedListNode* llist, int positionFromTail) {
    SintlyLinkedListNode* ptrNode = llist, *rearNode = nullptr, *tailNode = nullptr;

    while (ptrNode != nullptr)
    {
        rearNode = tailNode;
        tailNode = ptrNode;
        ptrNode = ptrNode->next;
        tailNode->next = rearNode;
    }

    llist = tailNode;

    for (int i = 0; i < positionFromTail; ++i) 
    {
        tailNode = tailNode->next;
    }

    return tailNode->data;      
}
