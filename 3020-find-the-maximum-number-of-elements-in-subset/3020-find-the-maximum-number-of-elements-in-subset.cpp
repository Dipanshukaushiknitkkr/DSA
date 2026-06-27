class Solution {
public:
    int maximumLength(vector<int>& nums) {
        unordered_map<long long,int> mpp;
        for(int num: nums){
            mpp[num]++;
        }
        int ans=1;
        if(mpp.count(1)){
           int cnt=mpp[1];
           if(cnt%2==0){
            ans=max(ans,cnt-1);
           }else{
            ans=max(ans,cnt);
           }
        }

        for(auto it: mpp){
            long long num=it.first;
            int len=0;
            if(num==1) continue;

            while(mpp.count(num) && mpp[num]>=2){
                len+=2;
                num*=num;
            }
            if(mpp.count(num)) len++;
            else len--;

            ans=max(ans,len);
        }
        return ans;
    }
};