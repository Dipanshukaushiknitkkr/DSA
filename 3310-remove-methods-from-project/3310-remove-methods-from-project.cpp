class Solution {
public:
    void dfs(int node,vector<vector<int>>& adj,vector<bool>& vis){
        vis[node]=true;
        for(auto it: adj[node]){
            if(!vis[it]){
                dfs(it,adj,vis);
            }
        }
    }
    vector<int> remainingMethods(int n, int k, vector<vector<int>>& invocations) {
        vector<vector<int>> adj(n);
        for(auto it: invocations){
            int i=it[0];
            int j=it[1];
            adj[i].push_back(j);
        }
        vector<bool> vis(n,false);
        dfs(k,adj,vis);
        vector<int> ans;
        for(auto it: invocations){
            int u=it[0];
            int v=it[1];
            if(!vis[u] && vis[v]){
                for(int i=0;i<n;i++){
                    ans.push_back(i);
                }
                return ans;
            }
        }
        for(int i=0;i<n;i++){
            if(!vis[i]) ans.push_back(i);
        }
        return ans;
    }
};