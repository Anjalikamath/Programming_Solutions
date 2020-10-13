/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
void split(struct ListNode*head,struct ListNode**a,struct ListNode**b){
    if(head==NULL||head->next==NULL){
        *a=head;
        *b=NULL;
    }
    else{
    struct ListNode*slow=head,*fast=head,*prev=NULL;
   while (fast != NULL && fast->next != NULL) {
            prev = slow;
            slow = slow->next;
            fast = fast->next->next;
        }
        // split
        
    *a=head;
    *b=slow;
        prev->next = NULL;}
    //slow->next=NULL;}
}
struct ListNode*merge(struct ListNode*a,struct ListNode*b){
    struct ListNode*res=NULL;
    if(a==NULL)return b;
    else if(b==NULL)return a;
    if(a->val<b->val){
        res=a;
        res->next=merge(a->next,b);
    }
    else{
        res=b;
        res->next=merge(a,b->next);
    }
    return res;
}

void ms(struct ListNode**head){
    struct ListNode*h=*head;
    if(h==NULL||h->next==NULL)return;
    struct ListNode*a=NULL,*b=NULL;
    split(h,&a,&b);
    ms(&a);
    ms(&b);
    *head=merge(a,b);
}

struct ListNode* sortList(struct ListNode* head){
   ms(&head);
    return head;

}