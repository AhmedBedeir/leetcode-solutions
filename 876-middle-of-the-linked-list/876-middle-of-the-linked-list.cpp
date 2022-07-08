/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        int len = 0;
            ListNode* curr = head;
        while (curr != NULL)
        {
            len++;
            curr = curr->next;
        }
        int indexOfNode = len / 2 + 1;
        ListNode* ans = head;
        int counter = 1;
        while (counter != indexOfNode)
        {
            ans = ans->next;
            counter++;
        }
        return ans;
    }
};