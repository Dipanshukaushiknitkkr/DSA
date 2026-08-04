class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int mini=101,maxi=0;
        unordered_set<int> st(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            mini=min(mini,nums[i]);
            maxi=max(maxi,nums[i]);
        }
        vector<int> ans;
        for(int i=mini+1;i<maxi;i++){
            if(st.find(i)==st.end()) ans.push_back(i);
        }
        return ans;
    }
};