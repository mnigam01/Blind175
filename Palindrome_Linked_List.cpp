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
    bool isPalindrome(ListNode* head) {
        
        auto slow = head;
        auto fast = head;
        while(fast!=NULL && fast->next!=NULL)
        {
            fast = fast->next->next;
            slow = slow->next;
        }
        ListNode* prv = NULL;
        while(slow!=NULL)
        {
            auto nxt = slow->next;
            slow->next = prv;
            prv = slow;
            slow = nxt;            
            
        }
        while(prv!=NULL)
        {
            if (head->val!=prv->val)
            {
                return false;
            }
            prv = prv->next;
            head = head->next;
        }
        return true;
        
    }
};