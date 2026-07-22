class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        unordered_map<int,int> freq;
        for(int i: nums){
            freq[i]++;
        }
        int ans=0;
        if(k==0){
            for(auto it: freq){
                if(it.second>1) ans++;
            }
        }else{
            for(auto it: freq){
                if(freq.count(it.first+k)) ans++;
            }
        }
        return ans;
    }
};