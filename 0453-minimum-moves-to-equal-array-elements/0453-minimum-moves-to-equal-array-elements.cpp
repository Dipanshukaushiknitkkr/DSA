class Solution {
public:
    int minMoves(vector<int>& nums) {
        int n=nums.size();
        int mini=nums[0];
        for(int i=1;i<n;i++){
            if(nums[i]<mini){
                mini=min(mini,nums[i]);
            }
        }
        int res=0;
        for(int i=0;i<n;i++){
            res+=nums[i]-mini;
        }
        return res;
    }
};