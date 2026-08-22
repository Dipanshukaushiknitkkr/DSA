class Solution {
public:
    bool checkDivisibility(int n) {
        int x=n;
        int sum=0,product=1;
        while(x>0){
            int a=x%10;
            sum+=a;
            product*=a;
            x=x/10;
        }
        return n%(sum+product)==0;
    }
};