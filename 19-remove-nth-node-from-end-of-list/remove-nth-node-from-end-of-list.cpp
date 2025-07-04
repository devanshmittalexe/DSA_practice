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
        ListNode*h=head;
        int N=0;
        while(h!=NULL){
            N++;
            h=h->next;
        }
        N=N-n-1;
        if(N==-1) return head->next;
        h=head;
        for(int i=0;i<N;i++){
            h=h->next;
        }
        h->next=h->next->next;
        return head;
    }
};