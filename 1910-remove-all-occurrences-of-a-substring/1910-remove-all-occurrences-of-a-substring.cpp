class Solution {
public:
    string removeOccurrences(string s, string part) {
        string ans;
        int n=part.size();

        for(char c: s){
            ans.push_back(c);

            if(ans.size()>=n && ans.substr(ans.size()-n,n)==part){
                ans.erase(ans.size()-n,n);
            }
        }
        return ans;
    }
};