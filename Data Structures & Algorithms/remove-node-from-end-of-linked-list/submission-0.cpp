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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp = new ListNode(-1);
        ListNode* start = temp;
        temp->next = head;
        ListNode* ex = head;
        for(int i=0;i<n;i++){
            ex = ex->next;
        }
        while(ex){
            head = head->next;
            temp = temp->next;
            ex = ex->next;
        }
        temp->next = head->next;
        delete(head);
        return start->next;
    }
};
