class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        int cnt=0;
        int val=0,expect=0;
        for(int i=0;i<arr.size();i++){
            val+=arr[i];
            expect+=i;
            if(val==expect) cnt++;
        }
        return cnt;
    }
};