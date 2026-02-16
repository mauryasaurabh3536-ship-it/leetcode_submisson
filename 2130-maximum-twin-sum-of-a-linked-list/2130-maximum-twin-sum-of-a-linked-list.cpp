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
    int pairSum(ListNode* head) {
      ListNode* slow=head;
      ListNode* fast=head;
      ListNode* prev=NULL;
      while(fast!=NULL && fast->next!=NULL){
        prev=slow;
        slow=slow->next;
        fast=fast->next->next;
      }
      prev->next=NULL;
      ListNode* temp1=head;
      ListNode* temp2=slow;
      ListNode* rev=NULL;
      ListNode* curr=slow;
      while(curr!=NULL){
        ListNode* next=curr->next;
        curr->next=rev;
        rev=curr;
        curr=next;
      }
      int m=0;
      while(temp1!=NULL && rev!=NULL){
        m=max(m,(temp1->val+rev->val));
        temp1=temp1->next;
        rev=rev->next;
      }
      return m;
    }
};