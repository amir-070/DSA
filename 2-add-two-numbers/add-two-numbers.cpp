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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

    
        // vector<int> n1, n2;

        // ListNode* p1 = l1;
        // ListNode* p2 = l2;

        // while (p1) {
        //     n1.push_back(p1->val);
        //     p1 = p1->next;
        // }
        // while (p2) {
        //     n2.push_back(p2->val);
        //     p2 = p2->next;
        // }

        // ListNode* fn = new ListNode(-1);
        // ListNode* temp = fn;
        // int i = 0, j = 0, carry = 0;

        // while (i < n1.size() && j < n2.size()) {
        //     int digit = n1[i++] + n2[j++] + carry;

        //     if (digit < 10) {
        //         ListNode* nn = new ListNode(digit);
        //         carry = 0;
        //         temp->next = nn;
        //         temp = temp->next;
        //     } else {
        //         ListNode* nn = new ListNode(digit % 10);
        //         digit /= 10;
        //         carry = digit;
        //         temp->next = nn;
        //         temp = temp->next;
        //     }
        // }
        // while (i < n1.size()) {
        //     int digit = n1[i++] + carry;
        //     if (digit < 10) {
        //         ListNode* nn = new ListNode(digit);
        //         carry = 0;
        //         temp->next = nn;
        //         temp = temp->next;
        //     } else {
        //         ListNode* nn = new ListNode(digit % 10);
        //         digit /= 10;
        //         carry = digit;
        //         temp->next = nn;
        //         temp = temp->next;
        //     }
        // }
        // while (j < n2.size()) {
        //     int digit = n2[j++] + carry;
        //     if (digit < 10) {
        //         ListNode* nn = new ListNode(digit);
        //         carry = 0;
        //         temp->next = nn;
        //         temp = temp->next;
        //     } else {
        //         ListNode* nn = new ListNode(digit % 10);
        //         digit /= 10;
        //         carry = digit;
        //         temp->next = nn;
        //         temp = temp->next;
        //     }
        // }

        // if (carry) {
        //     ListNode* nn = new ListNode(carry);
        //     temp->next = nn;
        //     temp = temp->next;
        // }
        //  return fn->next;
        // =====================================

        int carry = 0;
        int sum = 0;
        ListNode* dummy = new ListNode(0);
        ListNode* list = dummy;
    
        while(l1 != nullptr || l2 != nullptr || carry != 0){
            sum = 0;
            if(l1 != nullptr){
                sum += l1->val;
                l1 = l1->next;
            }

            if(l2 != nullptr){
                sum += l2->val;
                l2 = l2->next;
            }

            list->next = new ListNode((sum+carry) % 10);
            list = list->next;
            carry = (sum+carry) / 10;
        }

        return dummy->next; 
    }
};