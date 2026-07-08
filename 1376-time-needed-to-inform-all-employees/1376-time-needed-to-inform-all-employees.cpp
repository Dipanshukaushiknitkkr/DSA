class Solution {
public:
    int numOfMinutes(int n, int headID, vector<int>& manager, vector<int>& informTime) {
        vector<vector<int>> adj(n);
        for(int i=0;i<manager.size();i++){
            if(manager[i]!=-1) adj[manager[i]].push_back(i);
        }
        queue<pair<int,int>> q;
        q.push({headID,0});
        int ans=0;
        while(!q.empty()){
            int node=q.front().first;
            int time=q.front().second;
            time=time+informTime[node];
            q.pop();
            ans=max(ans,time);
            
            for(auto it: adj[node]){
                q.push({it,time});
            }       
        }
        return ans;

    }
};