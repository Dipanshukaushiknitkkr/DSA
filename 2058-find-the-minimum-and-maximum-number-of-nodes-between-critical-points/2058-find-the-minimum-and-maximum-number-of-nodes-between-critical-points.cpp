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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        vector<int> val;
        ListNode* prev=head;
        head=head->next;
        int n=1;

        while(head->next!=nullptr){
            n++;
            if((head->val>prev->val && head->val>head->next->val) || (head->val<prev->val && head->val<head->next->val)){
                val.push_back(n);
            }
            prev=head;
            head=head->next;
        }
        if(val.size()<2) return {-1,-1};
        sort(val.begin(),val.end());
        vector<int> res;
        int mini=INT_MAX;
        for(int i=1;i<val.size();i++){
            mini=min(mini,val[i]-val[i-1]);
        }
        res.push_back(mini);
        res.push_back(val[val.size()-1]-val[0]);
        return res;
    }
};