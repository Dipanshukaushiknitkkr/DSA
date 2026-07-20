class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int m=grid.size();
        int n=grid[0].size();
        int t=m*n;
        if(k%t==0) return grid;

        vector<vector<int>> ans(m,vector<int>(n,0));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                int x=i*n+j;
                x=(x+k)%t;
                int newi=x/n;
                int newj=x%n;
                ans[newi][newj]=grid[i][j];
            }
        }
        return ans;
    }
};