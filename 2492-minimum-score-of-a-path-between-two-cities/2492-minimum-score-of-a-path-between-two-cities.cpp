class Solution {
public:
    void dfs(int node, vector<vector<pair<int,int>>>& adj,vector<int>& vis,int& ans){
        vis[node]=1;
        for(auto it: adj[node]){
            int next=it.first;
            int dis=it.second;

            ans=min(ans,dis);

            if(!vis[next]){
                dfs(next,adj,vis,ans);
            }
        }
    }
    int minScore(int n, vector<vector<int>>& roads) {
        vector<vector<pair<int,int>>> adj(n+1);
        int mini=INT_MAX;
        for(auto it: roads){
            int u=it[0];
            int v=it[1];
            int dis=it[2];
            adj[u].push_back({v,dis});
            adj[v].push_back({u,dis});
        }
        vector<int> vis(n+1,0);
        dfs(1,adj,vis,mini);
        return mini;
    }
};