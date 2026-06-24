class Solution {
public:
    bool isvowel(char ch) {
    ch = tolower(ch);
    return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
}
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        int n=words.size();
        vector<int> val(n,0);
        for(int i=0;i<n;i++){
            string s=words[i];
            if(isvowel(s[0]) && isvowel(s[s.size()-1])){
                val[i]=1;
            }
        }
        for(int i=1;i<n;i++){
            val[i]=val[i-1]+val[i];
        }
        vector<int> res;
        for(int i=0;i<queries.size();i++){
            int l=queries[i][0];
            int r=queries[i][1];
            int sum=val[r];
            if(l>0) sum-=val[l-1];
            res.push_back(sum);
        }
        return res;
    }
};