class Solution {
public:
    string smallestPalindrome(string s) {
        vector<int> val(26,0);
        for(char a: s){
            val[a-'a']++;
        }
        int n=s.size();
        string res(n, ' ');
        int a=0,b=n-1;
        for(int i=0;i<26;i++){
            if(val[i]!=0){
                if(val[i]%2==0){
                    int x=val[i]/2;
                    for(int j=0;j<x;j++){
                        res[a]=i+'a';
                        res[b]=i+'a';
                        a++;b--;
                    }
                }else{
                    if(val[i]==1){
                        res[(a+b)/2]=i+'a';
                    }else{
                        int x=val[i]/2;
                    for(int j=0;j<x;j++){
                        res[a]=i+'a';
                        res[b]=i+'a';
                        a++;b--;
                    }
                    res[(a+b)/2]=i+'a';
                }
            }
        }
        }
        return res;
    }
};