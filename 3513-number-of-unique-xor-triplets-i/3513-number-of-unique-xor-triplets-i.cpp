class Solution {
public:
    int uniqueXorTriplets(vector<int>& nums) {
        int n=nums.size();
        if(n<=2) return n;
        int m=0;
        for(int i: nums){
            m=m|i;
        }
        return m+1;
    }
};