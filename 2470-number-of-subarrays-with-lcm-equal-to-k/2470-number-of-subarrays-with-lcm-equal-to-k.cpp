class Solution {
public:
    int subarrayLCM(vector<int>& nums, int k) {
        int n=nums.size();
        int cnt=0;
        for(int i=0;i<n;i++){
            int l=nums[i];
            for(int j=i;j<n;j++){
                l=lcm(nums[j],l);
                if(l==k) cnt++;
            if(l>k||k%l!=0){
                    break;
                }
            }
        }
        return cnt;
    }
};