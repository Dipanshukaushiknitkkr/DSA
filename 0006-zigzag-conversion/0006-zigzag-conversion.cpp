class Solution {
public:
    string convert(string s, int numRows) {
        int n=s.size();
        if(numRows==1) return s;
        vector<vector<char>>ans(numRows,vector<char>(n,'_'));
        int i=0;int j=0;int x=0;
        while(x<n){
            while(i<numRows &&x<n){
                ans[i][j]=s[x];
                i++;x++;
            }
            i=i-2;j=j+1;
            while(i>0 && x<n){
                ans[i][j]=s[x];
                x++;
                i--;j++;
            }
            i=0;
        }
        string res="";
        for(int i=0;i<numRows;i++){
            for(int j=0;j<n;j++){
                if(ans[i][j]!='_'){
                    res+=ans[i][j];
                }
            }
        }
        return res;
    }
};