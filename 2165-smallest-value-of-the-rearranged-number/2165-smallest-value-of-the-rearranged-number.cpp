class Solution {
public:
    long long negetive(long long v){
        v=abs(v);
        string s=to_string(v);
        sort(s.begin(),s.end());
        reverse(s.begin(),s.end());
        v=stoll(s);
        return -v; 
    }
    long long positive(long long v){
        string s=to_string(v);
        sort(s.begin(),s.end());
        int cnt=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='0') cnt++;
        }
        swap(s[0],s[cnt]);

        v=stoll(s);
        return v;
    }
    long long smallestNumber(long long num) {
        if(num==0) return 0;
        if(num>0) return positive(num);
        else return negetive(num);
    }
};