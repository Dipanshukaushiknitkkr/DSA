class Solution {
public:
    long long countCommas(long long n) {
        if(n<1000) return 0;
        long long cnt=0;
        if(n>=1000000000000000L){
            cnt+=n-999999999999999L;
        }
        if(n>=1000000000000L){
            cnt+=n-999999999999L;
        }
        if(n>=1000000000L){
            cnt+=n-999999999L;
        }
        if(n>=1000000L){
            cnt+=n-999999;
        }
        if(n>=1000){
            cnt+=n-999;
        }
        return cnt;
    }
};