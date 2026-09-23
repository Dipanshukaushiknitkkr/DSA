class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int total=0;
        for(int i=0;i<nums.size();i++){
            total+=nums[i];
        }
        int target=total-x;

        int i=0;
        int sum=0,maxlen=-1;
        for(int j=0;j<nums.size();j++){
            sum+=nums[j];

            while(sum>target && i<=j){
                sum-=nums[i];
                i++;
            }
            if(sum==target){
                maxlen=max(maxlen,j-i+1);
            }
        }
        if(maxlen==-1) return -1;
        else return nums.size()-maxlen;
    }
};