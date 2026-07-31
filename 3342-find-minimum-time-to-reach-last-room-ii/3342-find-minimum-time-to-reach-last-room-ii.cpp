class Solution {
public:
    int minTimeToReach(vector<vector<int>>& moveTime) {
        int n=moveTime.size();
        int m=moveTime[0].size();
        vector<vector<int>> time(n,vector<int>(m,INT_MAX));
        priority_queue<
    pair<pair<int,int>, pair<int,int>>,
    vector<pair<pair<int,int>, pair<int,int>>>,
    greater<pair<pair<int,int>, pair<int,int>>>
> pq;
        pq.push({{0,0},{0,0}});
        time[0][0]=0;

        int delrow[]={-1,0,1,0};
        int delcol[]={0,1,0,-1};
        while(!pq.empty()){
            auto it=pq.top();
            int tim=it.first.first;
            int state=it.first.second;
            int row=it.second.first;
            int col=it.second.second;
            pq.pop();

            if(tim>time[row][col]) continue;

            for(int i=0;i<4;i++){
                int nrow=row+delrow[i];
                int ncol=col+delcol[i];

                if(nrow>=0 && nrow<n && ncol>=0 && ncol<m){
                    int cost;
                    if(state%2==0) cost=1;
                    else cost=2;
                    int newt=max(tim,moveTime[nrow][ncol])+cost;
                    if(newt<time[nrow][ncol]){
                        time[nrow][ncol]=newt;
                        pq.push({{newt,state+1},{nrow,ncol}});
                    }
                }
            }
        }
        return time[n-1][m-1];
    }
};