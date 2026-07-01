class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n=nums.size();
        int one=0;
        for(int x: nums){
            if(x==1) one++;
        }
        if(one) return n-one;

        int len=INT_MAX;
        for(int i=0;i<n;i++){
            int g=nums[i];
            for(int j=i;j<n;j++){
                g=gcd(g,nums[j]);
                if(g==1){
                    len=min(len,j-i+1);
                    break;
                }
            }
        }
        if(len!=INT_MAX) return n+len-2;
        else return -1;
    }
};