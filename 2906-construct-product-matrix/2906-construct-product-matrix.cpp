class Solution {
public:
    vector<vector<int>> constructProductMatrix(vector<vector<int>>& grid) {
        const int mod=12345;
        int n=grid.size();
        int m=grid[0].size();
        vector<int> ans;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                ans.push_back(grid[i][j]%mod);
            }
        }
        int x=ans.size();
        vector<long long> prefix(x,1);
        vector<long long> suffix(x,1);

        for(int i=1;i<x;i++){
            prefix[i]=(1LL*prefix[i-1]*ans[i-1])%mod;
        }
        for(int i=x-2;i>=0;i--){
            suffix[i]=(1LL*suffix[i+1]*ans[i+1])%mod;
        }
        vector<vector<int>> res(n,vector<int>(m,1));
        int idx=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                res[i][j]=(prefix[idx]*suffix[idx])%mod;
                idx++;
            }
        }
        return res;

    }
};