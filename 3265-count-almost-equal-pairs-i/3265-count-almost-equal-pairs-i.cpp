class Solution {
public:
    bool found(string s1,string s2){
        if(s1==s2) return true;
        for(int i=0;i<s1.size();i++){
            for(int j=i+1;j<s1.size();j++){
                swap(s2[i],s2[j]);
                if(s1==s2) return true;
                swap(s2[i],s2[j]);
            }
        }
        return false;
    }
    int countPairs(vector<int>& nums) {
        int cnt=0;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                string a=to_string(nums[i]);
                string b=to_string(nums[j]);
                int maxi=max(a.size(),b.size());
                while(a.size()<maxi){
                    a='0'+a;
                }
                while(b.size()<maxi){
                    b='0'+b;
                }

                if(found(a,b)) cnt++;
            }
        }
        return cnt;
    }
};