class Solution {
public:
    bool check(int index,int target,vector<int>& nums,vector<vector<int>>& dp){
        if(target==0) return true;
        if(index==0) return nums[0]==target;

        if(dp[index][target]!=-1) return dp[index][target];
        bool ntake=check(index-1,target,nums,dp);
        bool take=false;
        if(nums[index]<=target){
            take=check(index-1,target-nums[index],nums,dp);
        }
        return dp[index][target]=take || ntake;
    }
    bool canPartition(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
        }
        if(sum%2!=0) return false;
        sum=sum/2;

        vector<vector<int>> dp(n,vector<int>(sum+1,-1));
        return check(n-1,sum,nums,dp);
    }
};