class Solution {
public:
    int minimumArea(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();

        int x=-1,y=-1,a=m,b=n;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==1){
                    x=max(x,i);
                    a=min(a,i);
                    y=max(y,j);
                    b=min(b,j);
                }
            }
        }
        return (x-a+1)*(y-b+1);
    }
};