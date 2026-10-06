class Solution {
public:
    int minAddToMakeValid(string s) {
        int cnt=0;
        stack<char> st;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                st.push('(');
                cnt++;
            }
            if(s[i]==')' && st.empty()){
                cnt++;
            }
            if(s[i]==')' && !st.empty()){
                cnt--;
                st.pop();
            }
        }
        return cnt;
    }
};