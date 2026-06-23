class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int xr=0;
        for(int n: nums){
            xr^=n;
        }
        unsigned int bit = (unsigned int)xr & (-(unsigned int)xr);
        int a=0,b=0;
        for(int n: nums){
            if(n&bit) a^=n;
            else b^=n; 
        }
        return {a,b};
    }
};