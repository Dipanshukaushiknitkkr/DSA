class Solution {
public:
    int reverseDegree(string s) {
        int n=s.size();

        int cnt=0;
        for(int i=0;i<n;i++){
            cnt+=(i+1)*(26-(s[i]-'a'));
        }
        return cnt;
    }
};