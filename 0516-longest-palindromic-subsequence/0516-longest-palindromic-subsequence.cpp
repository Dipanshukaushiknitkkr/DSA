class Solution {
public:
    int lcs(int m,int n,string& s1,string& s2,vector<vector<int>>& dp){
        if(m==0 || n==0) return 0;
        if(dp[m][n]!=-1) return dp[m][n];
        if(s1[m-1]==s2[n-1]){
            return dp[m][n] =1+lcs(m-1,n-1,s1,s2,dp);
        }else{
            return dp[m][n]=max(lcs(m-1,n,s1,s2,dp),lcs(m,n-1,s1,s2,dp));
        }
    }
    int longestPalindromeSubseq(string s) {
        int n=s.size();
        vector<vector<int>> dp(n+1,vector<int>(n+1,-1));
        string t=s;
        reverse(t.begin(),t.end());
        return lcs(n,n,s,t,dp);

    }
};