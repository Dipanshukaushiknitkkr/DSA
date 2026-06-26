class Solution {
public:
    vector<int> findLonely(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int> mpp;
        vector<int> res;
        for(int i=0;i<n;i++){
            mpp[nums[i]]++;
        }
        for(int i=0;i<n;i++){
            if(mpp[nums[i]]==1){
            if(mpp.find(nums[i]-1)==mpp.end() && mpp.find(nums[i]+1)==mpp.end()){
                res.push_back(nums[i]);
            }
        }
        }
        return res;
    }
};