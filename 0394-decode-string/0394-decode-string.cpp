class Solution {
public:
    string decodeString(string s) {
        stack<char> st;
        for(int i=0;i<s.size();i++){
            if(s[i]==']'){
                string decode;
                while(st.top()!='['){
                    decode.push_back(st.top());
                    st.pop();
                }
                st.pop();

                int base=1,k=0;
                while(!st.empty() && isdigit(st.top())){
                    k+=(st.top()-'0')*base;
                    st.pop();
                    base*=10;
                }

                reverse(decode.begin(),decode.end());
                while(k--){
                    for(char c: decode){
                        st.push(c);
                    }
                }
            }else{
                st.push(s[i]);
            }
        }
        string res;
        while(!st.empty()){
            res.push_back(st.top());
            st.pop();
        }
        reverse(res.begin(),res.end());
        return res;
    }
};