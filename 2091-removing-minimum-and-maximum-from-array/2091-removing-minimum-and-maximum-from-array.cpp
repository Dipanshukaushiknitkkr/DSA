class Solution {
public:
    int front(int mini,int maxi,vector<int>& nums){
        int res=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==maxi || nums[i]==mini){
                res=i+1;
            }
        }
        return res;
    }
    int back(int mini,int maxi,vector<int>& nums){
        int res=0;
        for(int i=nums.size()-1;i>=0;i--){
            if(nums[i]==maxi || nums[i]==mini){
                res=nums.size()-i;
            }
        }
        return res;
    }
    int both(int mini,int maxi,vector<int>& nums){
        int fres,bres;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==maxi || nums[i]==mini){
                fres=i+1;
                break;
            }
        }
        for(int i=nums.size()-1;i>=0;i--){
            if(nums[i]==maxi || nums[i]==mini){
                bres=nums.size()-i;
                break;
            }
        }
        return fres+bres;
    }
    int minimumDeletions(vector<int>& nums) {
        int mini=INT_MAX,maxi=INT_MIN;
        for(int i=0;i<nums.size();i++){
            mini=min(nums[i],mini);
            maxi=max(nums[i],maxi);
        }
        int val1=front(mini,maxi,nums);
        int val2=back(mini,maxi,nums);
        int val3=both(mini,maxi,nums);

        return min(val1,min(val2,val3));
    }
};