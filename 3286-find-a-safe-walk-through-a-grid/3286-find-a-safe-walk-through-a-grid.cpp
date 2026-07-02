class Solution {
public:
    bool findSafeWalk(vector<vector<int>>& grid, int health) {
        queue<pair<int,pair<int,int>>> q;
        int m=grid.size();
        int n=grid[0].size();
        int delrow[]={-1,0,1,0};
        int delcol[]={0,1,0,-1};
        vector<vector<int>> vis(m,vector<int>(n,-1));
        health-=grid[0][0];
        if(health<=0) return false;
        q.push({health,{0,0}});

        while(!q.empty()){
            auto it=q.front();
            q.pop();
            int currheal=it.first;
            int row=it.second.first;
            int col=it.second.second;
            if(row==m-1 && col==n-1) return true;

            for(int i=0;i<4;i++){
                int nrow=row+delrow[i];
                int ncol=col+delcol[i];

                if(nrow>=0 && nrow<m && ncol>=0 && ncol<n){
                    int newheal=currheal-grid[nrow][ncol];
                    if(newheal>0 && newheal>vis[nrow][ncol]){
                        vis[nrow][ncol]=newheal;
                        q.push({newheal,{nrow,ncol}});
                    }
                }
            }
        }
        return false;
    }
};