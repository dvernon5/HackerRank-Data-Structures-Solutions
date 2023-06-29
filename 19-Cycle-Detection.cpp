// Complete the has_cycle function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */

bool has_cycle(StringLinkedListNode* head) {
    unordered_set<SinglyLinkedListNode*> hashSet;

    while (head != nullptr)
    {
        if (hashSet.find(head) != hashSet.end())
        {
            return true;
        }

        hashSet.insert(head);
        head = head->next;
    }

    return false;
}
