class Solution {
public:
    int f(int ind,vector<int>& dp,vector<int>& cost){
        if(ind<=1) return 0;

        if(dp[ind]!=-1) return dp[ind];
        int left=f(ind-1,dp,cost)+cost[ind-1];
        int right=f(ind-2,dp,cost)+cost[ind-2];
        return dp[ind]=min(left,right); 
    }
    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
        vector<int> dp(n+1,-1);
        return f(n,dp,cost);    
    }
};