class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_map<int,int> mpp;
        for(int num: nums){
            mpp[num]++;
        }
        int i=k;
        while(true){
            if(mpp.find(i)==mpp.end()){
                return i;
            }else{
                i+=k;
            }
        }
    }
};