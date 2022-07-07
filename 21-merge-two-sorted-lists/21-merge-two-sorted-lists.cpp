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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode *newH = NULL;
        ListNode *right = NULL;
        ListNode *t1 = l1;
        ListNode *t2 = l2;
                if (!l1 && !l2)
            return l1;
        if (!l1)
            return l2;
        if (!l2)
            return l1;
        if (t1->val < t2->val)
        {
            newH = t1;
            right = t1;
            t1 = t1->next;
        }
        else
        {
            newH = t2; 
            right = t2;
            t2 = t2->next;
        }
        while (t1 || t2)
        {
            if (t2 == NULL)
            {
                right->next = t1;
                break;
            }
            if (t1 == NULL)
            {
                right->next = t2;
                break;
            }
            if (t1->val < t2->val)
            {
                right->next = t1;
                right = right->next;
                t1 = t1->next;
            }
            else
            {
                right->next = t2;
                right = right->next;
                t2 = t2->next;
            }
            
        }
        return newH;
    }
};