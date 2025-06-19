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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector<int>value;
        for(auto list:lists){
            while(list){
                value.push_back(list->val);
                list=list->next;
            }
        }
        sort(value.begin(),value.end());

        ListNode* ln=new ListNode(0);
        ListNode* temp=ln;
        for(int val:value){
            temp->next=new ListNode(val);
            temp=temp->next;
        }
        return ln->next;
    }
};