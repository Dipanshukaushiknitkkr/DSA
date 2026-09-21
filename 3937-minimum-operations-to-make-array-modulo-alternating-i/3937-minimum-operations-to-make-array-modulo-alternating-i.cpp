class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int res=INT_MAX;

        for(int x=0;x<k;x++){
            for(int y=0;y<k;y++){
                if(x==y) continue;
                int cost=0;
                for(int i=0;i<nums.size();i++){
                    int rem=nums[i]%k;
                    if(i%2==0){
                        cost+=min((x-rem+k)%k,(rem-x+k)%k);
                    }else{
                        cost+=min((y-rem+k)%k,(rem-y+k)%k);
                    }
                }
                res=min(res,cost);
            }
        }
        return res;
    }
};