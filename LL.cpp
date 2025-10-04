class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode*temp = nullptr;
        ListNode*curr = head;
        

        while(curr){
            ListNode*nextn=curr->next;
            curr->next=temp;
            temp = curr;
            curr=nextn;
        }
        return temp;
    }
};
