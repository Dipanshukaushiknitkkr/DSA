class Solution {
public:
    int fxn(int ind,int amount,vector<int>& coins,vector<vector<int>>& dp){
        if(ind==0){
            if(amount%coins[0]==0) return 1;
            else return 0;
        } 

        if(dp[ind][amount]!=-1) return dp[ind][amount];
        int ntake=fxn(ind-1,amount,coins,dp);
        int take=0;
        if(coins[ind]<=amount){
            take=fxn(ind,amount-coins[ind],coins,dp);
        }
        return dp[ind][amount]=take+ntake;
    }
    int change(int amount, vector<int>& coins) {
        int n=coins.size();
        vector<vector<int>> dp(n,vector<int>(amount+1,-1));
        return fxn(n-1,amount,coins,dp);
    }
};