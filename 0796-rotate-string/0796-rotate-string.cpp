class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.size()!=goal.size()) return false;

        for(int i=0;i<s.size();i++){
            if(s==goal) return true;
            char t=goal.back();
            goal.pop_back();
            goal=t+goal;
        }
        return false;
    }
};