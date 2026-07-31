class Solution {
public:
    int minTimeToReach(vector<vector<int>>& moveTime) {
        int n=moveTime.size();
        int m=moveTime[0].size();
        vector<vector<int>> time(n,vector<int>(m,INT_MAX));
        priority_queue<
            pair<int,pair<int,int>>,
            vector<pair<int,pair<int,int>>>,
            greater<pair<int,pair<int,int>>>
        > pq;
        pq.push({0,{0,0}});
        time[0][0]=0;

        int delrow[]={-1,0,1,0};
        int delcol[]={0,1,0,-1};
        while(!pq.empty()){
            int tim=pq.top().first;
            int row=pq.top().second.first;
            int col=pq.top().second.second;
            pq.pop();

            // if(tim>time[row][col]) continue;

            for(int i=0;i<4;i++){
                int nrow=row+delrow[i];
                int ncol=col+delcol[i];

                if(nrow>=0 && nrow<n && ncol>=0 && ncol<m){
                    int newt=max(tim,moveTime[nrow][ncol])+1;
                    if(newt<time[nrow][ncol]){
                        time[nrow][ncol]=newt;
                        pq.push({newt,{nrow,ncol}});
                    }
                }
            }
        }
        return time[n-1][m-1];
    }
};