class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        unordered_set<int> unique;

        for(int i=0;i<digits.size();i++){
            if(digits[i]==0) continue;

            for(int j=0;j<digits.size();j++){
                if(i==j) continue;

                for(int k=0;k<digits.size();k++){
                    if(k==i || k==j) continue;
                    if(digits[k]%2!=0) continue;
                    int num=100*digits[i]+10*digits[j]+digits[k];
                    unique.insert(num);
                }
            }
        }
        return unique.size();
    }
};