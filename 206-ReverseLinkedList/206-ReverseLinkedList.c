/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseList(struct ListNode* head) {
    struct ListNode* temp = head;
    struct ListNode* prev = NULL;
    struct ListNode* front = NULL;

    while (temp != NULL) {
        front = temp->next;
        temp->next = prev;
        prev = temp;
        temp = front;
    }
    return prev;
}