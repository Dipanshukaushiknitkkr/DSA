class Solution {
public:
    int sumOfGoodNumbers(vector<int>& nums, int k) {
        int n=nums.size();
        int ans=0;
        for(int i=0;i<n;i++){
            bool good=true;
            if(i-k>=0 && nums[i]<=nums[i-k]) good=false;
            if(i+k<n && nums[i]<=nums[i+k]) good=false;
            if(good) ans+=nums[i];
        }
        return ans;
    }
};