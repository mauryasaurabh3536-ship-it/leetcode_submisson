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
    ListNode* deleteMiddle(ListNode* head) {
      if(head==NULL || head->next==NULL) return NULL;
      if(head->next->next==NULL){
        head->next=NULL;
        return head; 
      }
      ListNode* temp=head;
      int len=0;
      while(temp!=NULL){
        len++;
        temp=temp->next;
      } 
        temp=head;
        for(int i=0;i<(len/2)-1;i++){
            temp=temp->next;
        }
        temp->next=temp->next->next;
        return head;  
    }
};