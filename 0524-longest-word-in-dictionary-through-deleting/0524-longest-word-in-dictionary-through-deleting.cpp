class Solution {
public:
    bool check(string& s,string& t){
        int i=0,j=0;
        while(i<s.size() && j<t.size()){
            if(s[i]==t[j]){
                j++;
            }
            i++;
        }
        return j==t.size();
    }
    string findLongestWord(string s, vector<string>& dictionary) {
        int n=dictionary.size();
        string ans="";
        for(int i=0;i<n;i++){
            string c=dictionary[i];
            int len=c.size();
            if(check(s,c)){
                if(c.size()>ans.size() || (c.size()==ans.size() && c<ans)){
                    ans=c;
                }
            }
        }
        return ans;
    }
};