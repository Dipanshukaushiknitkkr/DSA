class Solution {
public:
    string removeOuterParentheses(string s) {
        string res;
        int ans=0;
        int n=s.size();

        for(int i=0;i<n;i++){
            if(s[i]=='('){
                if(ans>0){
                    res+=s[i];
                }
                ans++;
            }
            else if(s[i]==')'){
                ans--;
                 if(ans>0){
                    res+=s[i];
                }
            }
        }
        return res;
    }
};