class Solution {
public:
    int maxProduct(int n) {
        int maxi=-1,maxi2=-1;
        while(n>0){
            int a=n%10;
            if(a>=maxi){
                maxi2=maxi;
                maxi=a;
            }else if(a>maxi2){
                maxi2=a;
            }
            n=n/10;
        }
        return maxi*maxi2;
    }
};