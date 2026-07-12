class Solution {
public:
    void dfs(int node,vector<vector<int>>& adj,vector<int>& vis,int&  count){
        vis[node]=1;
        count++;
        for(auto it: adj[node]){
            if(!vis[it]){
                dfs(it,adj,vis,count);
            }
        }
    }
    int maximumDetonation(vector<vector<int>>& bombs) {
        int n=bombs.size();
        vector<vector<int>> adj(n);
        for(int i=0;i<bombs.size();i++){
                long long x1=bombs[i][0];
                long long y1=bombs[i][1];
                long long r1=bombs[i][2];
            for(int j=0;j<bombs.size();j++){
                if(i==j) continue;
                else{
                    long long x2=bombs[j][0];
                    long long y2=bombs[j][1];
                    long long r2=bombs[j][2];

                    long long dx=x2-x1;
                    long long dy=y2-y1;
                    long long dis=dx*dx+dy*dy;
                    long long r=r1*1LL*r1;

                    if(r>=dis){
                        adj[i].push_back(j);
                    }
                }
            }   
        }
        int ans=0;
        for(int i=0;i<n;i++){
            vector<int> vis(n,0);
            int cnt=0;
            dfs(i,adj,vis,cnt);
            ans=max(ans,cnt);
        }
        return ans;
    }
};