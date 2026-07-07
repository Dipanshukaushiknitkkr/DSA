class Solution {
public:
    long long sumAndMultiply(int n) {
        int x=0;
        long long sum=0,i=1;
        while(n>0){
            int a=n%10;
            if(a!=0){
                sum+=a;
                x=a*i+x;
                i=i*10;
            }
            n=n/10;
        }
        return x*sum;
    }
};