class Solution {
public:
//done
    ListNode* reverseList(ListNode* head) {
int i = 1;
        if (head == nullptr || head->next == nullptr)
        {
            return head;
        }
         
        ListNode* ptr = head->next;

        while(ptr != nullptr){
       
            ListNode* temp = ptr->next;
            ptr->next = head;

            if(i){
                head->next= nullptr;
                i--;
            }

            head = ptr;
            ptr = temp;

        }

        return head;
    }
};