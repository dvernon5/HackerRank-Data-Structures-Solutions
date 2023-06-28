// Complete the mergeLists function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */

SinglyLinkedListNode* mergeLists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
    if (head1 == nullptr) 
    {
        return head2;
    } else if (head2 == nullptr) {
        return head1;
    }

    SinglyLinkedListNode* headNode = nullptr, *lastNode = nullptr;

    if (head1->data <= head2->data)
    {
        headNode = lastNode = head1;
        head1 = head1->next;
        lastNode->next = nullptr;
    } else if (head1->data >= head2->data) {
        headNode = lastNode = head2;
        head2 = head2->next;
        lastNode->next = nullptr;
    }

    while (head1 && head2)  // head1 != nullptr && head2 != nullptr
    {
        if (head1->data <= head2->data)
        {
            lastNode->next = head1;
            lastNode = head1;
            head1 = head1->next;
            lastNode->next = nullptr;
        } else if (head1->data >= head2->data) {
            lastNode->next = head2;
            lastNode = head2;
            head2 = head2->next;
            lastNode->next = nullptr;
        }
    }

    if (head1) // head1 != nullptr
    {
        lastNode->next = head1;
    }

    if (head2)  // head2 != nullptr
    {
        lastNode->next = head2;
    }

    return headNode;
}
