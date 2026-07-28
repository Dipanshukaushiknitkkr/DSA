class Solution {
public:
    vector<vector<int>> aggregateTimeSeries(vector<vector<int>>& series1, vector<vector<int>>& series2) {
        int m=series1.size();
        int n=series2.size();
        vector<vector<int>> res;
        int i=0,j=0;
        while(i< m && j<n){
            if(series1[i][0]<series2[j][0]){
                res.push_back({series1[i][0],series1[i][1]+series2[j][1]});
                i++;
            }else if(series1[i][0]>series2[j][0]){
                res.push_back({series2[j][0],series1[i][1]+series2[j][1]});
                j++;
            }else{
                res.push_back({series2[j][0],series1[i][1]+series2[j][1]});
                j++;i++;
            }
        }
        while(i<m){
            res.push_back({series1[i][0],series1[i][1]});
            i++;
        }
        while(j<n){
            res.push_back({series2[j][0],series2[j][1]});
            j++;
        }
        return res;
    }
};