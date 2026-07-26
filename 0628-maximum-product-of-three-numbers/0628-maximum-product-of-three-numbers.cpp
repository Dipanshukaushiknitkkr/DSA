class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int maxi=1;
        for(int i=0;i<3;i++){
            maxi=maxi*nums[n-1-i];
        }
        int maxu=nums[0]*nums[1]*nums[n-1];
        return max(maxu,maxi);
    }
};