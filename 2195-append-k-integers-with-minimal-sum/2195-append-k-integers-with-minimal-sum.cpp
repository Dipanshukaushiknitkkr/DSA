class Solution {
public:
    long long minimalKSum(vector<int>& nums, int k) {
        set<int> st(nums.begin(),nums.end());
        long long sum=1LL*k*(k+1)/2;
        for(auto t: st){
            if(t<=k){
                sum-=t;
                k++;
                sum+=k;
            }
        }
        return sum;
    }
};