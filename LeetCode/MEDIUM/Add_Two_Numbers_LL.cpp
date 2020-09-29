class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        if(l1==NULL&& l2==NULL)return NULL;
        if(l1==NULL && l2!=NULL)return l2;
        if(l2==NULL && l1!=NULL)return l1;
        ListNode*p=l1,*q=l2;
        ListNode*head=new ListNode(-1);
        ListNode*temp=head;
        int carry=0;
        while(p!=NULL || q!=NULL || carry){
            int x=p==NULL?0:p->val;
            int y=q==NULL?0:q->val;
            int sum=x+y+carry;
            temp->next=new ListNode(sum%10);
            temp=temp->next;
            carry=sum/10;
            if(p)p=p->next;
            if(q)q=q->next;
        }
        return head->next;
        
    }
};