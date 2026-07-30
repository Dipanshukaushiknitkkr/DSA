class Solution {
public:
    int minimumPushes(string word) {
        vector<int> mpp(26,0);
        for(char c: word){
            mpp[c-'a']++;
        }
        int ans=0;
        sort(mpp.begin(),mpp.end());
        for(int i=25;i>=0;i--){
            if(mpp[i]==0) break;
            ans+=((25-i)/8+1)*mpp[i];
        }
        return ans;
    }
};