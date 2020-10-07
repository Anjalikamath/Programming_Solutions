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
    ListNode* rotateRight(ListNode* head, int k) {
        
        if (head == NULL || head->next == NULL)return head;
        
        int size = 0;
        ListNode*p = head;
        while (p != NULL){
            p = p->next;
            size++;
        }
        int rotation;
        if (k < size ) rotation = k;
        else if (k == size ) return head;
        else rotation = k % size;
        
        p = head;
        ListNode*q = head;
        while (p != NULL && rotation!=0)
        {
            p=p->next;
            rotation--;
        }
        
        while(p->next != NULL){
            q=q->next;
            p=p->next;
            
        }
        
        p->next = head;
        head = q->next;
        q->next = NULL;
        return head;
        
    }
};