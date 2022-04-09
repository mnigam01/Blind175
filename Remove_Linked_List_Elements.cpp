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
    ListNode* removeElements(ListNode* head, int val) {
        
        auto dummy = new ListNode(0,head);
        auto prv = dummy;
        while(head!=NULL)
        {
            // cout << head->val<<endl;
            if (head->val==val)
            {
                auto tmp = head;
                head = head->next;
                prv->next = head;
                delete tmp;
                
            }
            else
            {
                prv = head;
                head = head->next;
            }
            
        }
        return dummy->next;
        
    }
};