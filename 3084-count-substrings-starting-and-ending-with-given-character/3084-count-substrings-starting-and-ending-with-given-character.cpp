class Solution {
public:
    long long countSubstrings(string s, char c) {
        long long i=0;
        for(char a: s){
            if(a==c) i++;
        }
        return i*(i+1)/2;
    }
};