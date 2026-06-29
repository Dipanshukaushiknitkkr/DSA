class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
        int cnt=0;
        for(int i=0;i<patterns.size();i++){
            size_t pos=word.find(patterns[i]);
            if(pos!=string::npos) cnt++;
        }
        return cnt;
    }
};