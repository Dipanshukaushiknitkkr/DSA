class Solution {
public:
    int countMajoritySubarrays(vector<int>& nums, int target) {
        int n=nums.size();
        int cnt=0;
        for(int i=0;i<n;i++){
            int tar=0;
            for(int j=i;j<n;j++){
                if(nums[j]==target) tar++;
                int len=j-i+1;
                if(tar>len/2) cnt++;
            }
        }
        return cnt;
    }
};