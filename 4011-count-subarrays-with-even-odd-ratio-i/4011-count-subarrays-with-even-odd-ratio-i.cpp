class Solution {
public:
    int countRatioSubarrays(vector<int>& nums, int a, int b) {
        int n=nums.size();
        int ans=0;

        for(int i=0;i<n;i++){
            int r=i;
            int x=0,y=0;
            while(r<n){
                if(nums[r]%2==0) x++;
                else y++;

                if(y>0 && x*b<=y*a) ans++;
                r++;
            }
        }
        return ans;
    }
};