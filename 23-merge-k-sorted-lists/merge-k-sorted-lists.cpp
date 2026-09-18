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
// class Solution {
// public:
//     ListNode* mergeKLists(vector<ListNode*>& lists) {

//         if(lists.size() == 0) return NULL;
//         if(lists.size() == 1) return lists[0];
        
//         int n = lists.size()-1;
//         int i = n;
//         while(i>0)
//         {

//             ListNode* dummy = new ListNode(-1);
//             ListNode* p1 = lists[i-1];
//             ListNode* p2 = lists[i];
//             ListNode* p3 = dummy;

//             while( p1 and p2)
//             {
//                 if(p1->val < p2->val)
//                 {
//                     p3->next = p1;
//                     p1 = p1->next;
//                     p3 = p3->next;
//                 }
//                 else
//                 {
//                     p3->next = p2;
//                     p2 = p2->next;
//                     p3 = p3->next;
//                 }
//             }
//             if(p1) p3->next = p1;
//             if(p2) p3->next = p2;

//             lists[i-1] = dummy->next;
            
//             lists.pop_back();
//             i--;
//         }
//         return lists[0];
//     }
// };
class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if (lists.empty()) {
            return nullptr;
        }

        while (lists.size() > 1) {
            vector<ListNode*> temp;
            for (size_t i = 0; i < lists.size(); i += 2) {
                ListNode* l1 = lists[i];
                ListNode* l2 = i + 1 < lists.size() ? lists[i + 1] : nullptr;
                temp.push_back(mergeLists(l1, l2));
            }
            lists = move(temp);
        }

        return lists[0];        
    }

private:
    ListNode* mergeLists(ListNode* l1, ListNode* l2) {
        ListNode dummy;
        ListNode* node = &dummy;

        while (l1 && l2) {
            if (l1->val > l2->val) {
                node->next = l2;
                l2 = l2->next;
            } else {
                node->next = l1;
                l1 = l1->next;
            }
            node = node->next;
        }

        node->next = l1 ? l1 : l2;
        return dummy.next;
    }    
};