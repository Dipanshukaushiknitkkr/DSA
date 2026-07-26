class Solution {
public:
    int dfs(int i,int j,vector<vector<int>>& grid,vector<vector<int>>& vis){
        vis[i][j]=1;
        int ans=grid[i][j];
        int m=grid.size();
        int n=grid[0].size();
        int delrow[]={-1,0,1,0};
        int delcol[]={0,1,0,-1};

        for(int k=0;k<4;k++){
            int nrow=i+delrow[k];
            int ncol=j+delcol[k];
            if(nrow>=0 && nrow<m && ncol>=0 && ncol<n && grid[nrow][ncol]>0 && vis[nrow][ncol]==0){
                ans+=dfs(nrow,ncol,grid,vis);
            }
        }
        return ans;
    }
    int findMaxFish(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();

        vector<vector<int>> vis(m,vector<int>(n,0));
        int maxi=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(!vis[i][j] && grid[i][j]!=0){
                    maxi=max(maxi,dfs(i,j,grid,vis));
                }
            }
        }
        return maxi;
    }
};