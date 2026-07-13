class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        string s="123456789";
        string l=to_string(low);
        string h=to_string(high);
        vector<int> ans;
        for(int i=l.size();i<=h.size();i++){
            for(int j=0;j<=9-i;j++){
                string res=s.substr(j,i);
                int x=stoi(res);
                if(x>=low && x<=high){
                    ans.push_back(x);
                }
            }
        }
        return ans;
    }
};