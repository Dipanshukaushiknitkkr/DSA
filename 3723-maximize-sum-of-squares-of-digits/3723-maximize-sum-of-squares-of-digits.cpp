class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        if(sum>9*num) return "";
        int nine=sum/9;
        int rem=sum%9;
        int score=0;
        string ans="";
        for(int i=0;i<nine;i++){
            ans+='9';
        }
        if(rem>0) ans+=to_string(rem);

        while(ans.size()<num){
            ans+='0';
        }
        return ans;
    }
};