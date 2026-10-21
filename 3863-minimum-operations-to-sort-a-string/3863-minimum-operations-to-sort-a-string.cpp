class Solution {
public: 
    bool issort(string s){
        for(int i=1;i<s.size();i++){
            if(s[i]<s[i-1]) return false;
        }
        return true;
    }
    int minOperations(string s) {
        int n=s.size();
        if(issort(s)) return 0;
        if(n==2) return -1;
        char m=*min_element(s.begin(),s.end());
        char x=*max_element(s.begin(),s.end());

        if(s[0]==m || s[n-1]==x) return 1;

        for(int i=1;i<n-1;i++){
            if(s[i]==m || s[i]==x) return 2;
        }
        return 3;
    }
};