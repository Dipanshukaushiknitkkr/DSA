class Solution {
public:
    int inc(vector<int>& nums){
        int n=nums.size();
        int ans=1;
        int cnt=1;
        for(int i=0;i<n-1;i++){
            if(nums[i]<nums[i+1]){
                cnt++;
                ans=max(ans,cnt);
            }else{
                cnt=1;
            }
        }
        return ans;
    }
    int dec(vector<int>& nums){
        int n=nums.size();
        int ans=1;
        int cnt=1;
        for(int i=0;i<n-1;i++){
            if(nums[i]>nums[i+1]){
                cnt++;
                ans=max(ans,cnt);
            }else{
                cnt=1;
            }
        }
        return ans;
    }
    int longestMonotonicSubarray(vector<int>& nums) {
        return max(inc(nums),dec(nums));
    }
};