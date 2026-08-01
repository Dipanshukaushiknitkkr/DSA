class Solution {
public:
    int solve(int i,int j,vector<int>& nums){
        if(i==j) return nums[i];
        int ltake=nums[i]-solve(i+1,j,nums);
        int rtake=nums[j]-solve(i,j-1,nums);
        return max(ltake,rtake);
    }
    bool predictTheWinner(vector<int>& nums) {
        return solve(0,nums.size()-1,nums)>=0;
    }
};