class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        vector<string> res;

        if (strs.empty()) {
            return "";
        }
        sort(strs.begin(), strs.end());

        string first = strs[0];
        string last = strs.back();

        int cnt= 0;
        int n=min(first.size(),last.size());
        for(int i=0;i<n;i++){
            if(first[i]==last[i]) cnt++;
            else break;
        }
        if(cnt==0) return "";
        else return first.substr(0, cnt);
    }
};