// Complete the compare_lists function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */

int numberOfNodes(SinglyLinkedListNode* ptrNode) {
    int counter = 0;

    while (ptrNode != nullptr) 
    {
        counter++;
        ptrNode = ptrNode->next;
    }

    return counter;
}

bool compare_lists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
    int numberOfHeadOneNodes = numberOfNodes(head1);
    int numberOfHeadTwoNodes = numberOfNodes(head2);

    if (numberOfHeadOneNodes != numberOfHeadTwoNodes)
    {
        return false;
    } else if (numberOfHeadOneNodes == numberOfHeadTwoNodes) {
        while (head1 && head2)    // head1 != nullptr && head2 != nullptr
        {
            if (head1->data != head2->data)
            {
                return false;
            }

            head1 = head1->next;
            head2 = head2->next;
        }
    }

    return true;
}
