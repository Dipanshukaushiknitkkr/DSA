class Solution {
public:
    int minimumPushes(string word) {
        int n=word.size();
        int ans=0;
        while(n>0){
            n--;
           ans+=(n/8)+1;
        }
        return ans;
    }
};