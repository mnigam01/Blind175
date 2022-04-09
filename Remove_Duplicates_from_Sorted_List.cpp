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
    ListNode* deleteDuplicates(ListNode* head) {
        
        if (head==NULL)
        {
            return head;
        }
        auto prv = head;
        auto tmp = head->next;
        while(tmp!=NULL)
        {
            if (tmp->val==prv->val)
            {
                auto c = tmp;
                tmp = tmp->next;
                prv->next = NULL;
                delete c;
            }
            else
            {
                prv->next = tmp;
                prv = tmp;
                tmp = tmp->next;
            }
        }
        return head;
        
        
    }
};