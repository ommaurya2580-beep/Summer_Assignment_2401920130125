class Solution {
public:

    ListNode* reverse(ListNode* head) {
        ListNode* prev = NULL;

        while(head != NULL) {
            ListNode* nextNode = head->next;
            head->next = prev;
            prev = head;
            head = nextNode;
        }

        return prev;
    }

    bool isPalindrome(ListNode* head) {

        ListNode* slow = head;
        ListNode* fast = head;

        while(fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
        }

        ListNode* secondHalf = reverse(slow);

        while(secondHalf != NULL) {
            if(head->val != secondHalf->val)
                return false;

            head = head->next;
            secondHalf = secondHalf->next;
        }

        return true;
    }
};
