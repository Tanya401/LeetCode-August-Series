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
    ListNode*reverse(ListNode* temp1){
        ListNode*prev = NULL;
        ListNode*curr = temp1;
        ListNode*next;
        while(curr!=NULL){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        return prev;
    }
    bool isPalindrome(ListNode* head) {
        //aage se or peeche se same..
        int n=0;
        ListNode*temp=head;
        while(temp!=NULL){
            temp = temp->next;
            n++;
        }
        if(n==2 && head->val == head->next->val)
            return true;
        if(n==2 && head->val != head->next->val)
            return false;
        temp=head;
        int m = n/2;
        if(n%2!=0){
        int k = m+1;
            while(k--)
               temp=temp->next; 
        }
        else{
            int k= m;
            while(k--)
                temp=temp->next;
        }
     ListNode*ptr = reverse(temp);
        while(m >=0 && head!=NULL && ptr!=NULL){
            if(head->val!=ptr->val)
                return false;
            head=head->next;
            ptr=ptr->next;
            m--;
        }
        return true;
    }
};