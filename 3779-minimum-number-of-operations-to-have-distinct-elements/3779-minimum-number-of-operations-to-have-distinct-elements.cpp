class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int> mpp; 
        int cnt=0;
        for( int i: nums){
            mpp[i]++;
            if(mpp[i]==2) cnt++;
        }
        int ans=0;
        for(int i=0;i<n && cnt>0;i+=3){
            for(int j=i;j<i+3 && j<n;j++){
                if(mpp[nums[j]]>1){ 
                    mpp[nums[j]]--;
                    if(mpp[nums[j]]==1) cnt--;
                }
            }
            ans++;
        }
        return ans;
    }
};