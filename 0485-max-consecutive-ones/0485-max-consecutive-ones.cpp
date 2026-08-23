class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int j=0;int maxi=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                maxi=max(maxi,i-j+1);
            }else{
                j=i+1;
            }
        }
        return maxi;
    }
};