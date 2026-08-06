class Solution {
public:
    int smallestNumber(int n, int t) {
        for(int i=n;i<=n+10;i++){
            int x=i;int pro=1;
            while(x>0){
                pro*=x%10;
                x=x/10;
            }
            if(pro%t==0) return i;
        }
        return -1;
    }
};