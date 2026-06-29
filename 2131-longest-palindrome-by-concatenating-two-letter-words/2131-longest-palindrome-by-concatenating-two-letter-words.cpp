class Solution {
public:
    int longestPalindrome(vector<string>& words) {
        int n=words.size();
        unordered_map<string,int> mpp;
        int res=0;
        for(int i=0;i<n;i++){
            string s=words[i];
            string p=s;
            reverse(p.begin(),p.end());
            if(mpp[p]>0){
                res+=4;
                mpp[p]--;
            }else{
                mpp[s]++;
            }
        }
        for(auto it: mpp){
            if(it.first[0]==it.first[1] && it.second>0){
                res+=2;
                break;
            }
        }
        return res;
    }
};