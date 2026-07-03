class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int mini=INT_MAX;
        for(int i: nums1){
            if(i%2==1){
                mini=min(mini,i);
            }
        }
        for(int i: nums1){
            if(i%2==0 && mini!=INT_MAX && i<mini){
                return false;
            }
        }
        return true;
    }
};