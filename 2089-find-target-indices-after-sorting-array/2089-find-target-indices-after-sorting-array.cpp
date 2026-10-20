class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        int less=0,equal=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<target) less++;
            else if(nums[i]==target) equal++;
        }

        vector<int> res;
        for(int i=0;i<equal;i++){
            res.push_back(less+i);
        }
        return res;
    }
};