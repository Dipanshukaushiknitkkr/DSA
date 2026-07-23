class Solution {
public:
    int edgeScore(vector<int>& edges) {
        int n=edges.size();

        vector<vector<int>> adj(n);
        for(int i=0;i<n;i++){
            adj[edges[i]].push_back(i);
        }
        int val;long long ans=0;
        for(int i=0;i<n;i++){
            long long sum=0;
            for(auto it: adj[i]){
                sum+=it;
            }
            if(sum>ans){
                ans=sum;
                val=i;
            }
        }
        return val;
    }
};