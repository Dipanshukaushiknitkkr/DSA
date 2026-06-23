class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        map<long long,int> mpp;

        for(int i=0;i<nums.size();i++){
            if(nums[i]>0){
                mpp[nums[i]]++;
            }
        }
        for(int i=1;i<=nums.size();i++){
            if(mpp.find(i)==mpp.end()) return i;
        }
        return nums.size()+1;
    }
};