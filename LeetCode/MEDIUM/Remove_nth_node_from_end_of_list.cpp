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
        
        if(head==NULL)return NULL;
        ListNode*p=head,*q=head,*r;
        while(--n && p!=NULL){
            p=p->next;
        }
        if(p->next==NULL)return head->next;
        while(p->next!=NULL){
            r=q;
            q=q->next;
            p=p->next;
        }
        if(r!=NULL){
        r->next=q->next;
        q->next=NULL;}
        else head=head->next;
        //free(q);
        return head;
        
    }
};