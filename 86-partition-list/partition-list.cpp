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
    ListNode* partition(ListNode* h, int x) {
        ListNode ge(0);
        ListNode sm(0);
        // ListNode *h=head;
        ListNode* gep=&ge;
        ListNode* smp=&sm;
        while(h!=NULL){
            if(h->val<x){
                smp->next=h;
                smp=smp->next;
            }
            else{
                gep->next=h;
                gep=gep->next;
            }
            h=h->next;
        }
        gep->next=NULL;
        smp->next=ge.next;
        return sm.next;
    }
};