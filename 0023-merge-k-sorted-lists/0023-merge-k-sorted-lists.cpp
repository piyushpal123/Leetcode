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
    struct compare {
    bool operator()(ListNode*a,ListNode*b){
       return a->val > b->val;
       }
};
public:

    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<ListNode*,vector<ListNode*>,compare>minheap;
        if(lists.empty())return NULL;
        //step
        for( ListNode* i:lists){
            if(i!=NULL){
                    minheap.push(i);
            }

        }
        ListNode*head=NULL;
        ListNode*tail=NULL;
        while(!minheap.empty()){
            ListNode*temp=minheap.top();
            minheap.pop();
            if(head==NULL){
                head=temp;
            tail=temp;
            
            if(head->next!=NULL){
                minheap.push(tail->next);
            }}
            else{
                tail->next=temp;
                tail=temp;

                if(tail->next!=NULL){
                    minheap.push(tail->next);
                }
            }
        }
        return head;
        
        
    }
};