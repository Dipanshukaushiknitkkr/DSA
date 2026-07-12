class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int> arr2=arr;
        sort(arr2.begin(),arr2.end());
        unordered_map<int,int> mpp;
        int rank=1;
        for(int i=0;i<arr2.size();i++){
            if(mpp.find(arr2[i])==mpp.end()){
                mpp[arr2[i]]=rank;
                rank++;
            }
        }
        for(int i=0;i<arr.size();i++){
            arr[i]=mpp[arr[i]];
        }
        return arr;
    }
};