class Solution {
public:
    long long count(vector<int>& nums,int target){
        long long cnt=0;
        int l=0,r=nums.size()-1;
        while(l<r){
            if(nums[l]+nums[r]<=target){
                cnt+=r-l;
                l++;
            }else{
                r--;
            }
        }
        return cnt;
    }
    long long countFairPairs(vector<int>& nums, int lower, int upper) {
        sort(nums.begin(),nums.end());
        return count(nums,upper)-count(nums,lower-1);
    }
};