/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    unordered_map<int,int> mpp;
    int check(TreeNode* root){
        if(root==NULL) return 0;
        int left=check(root->left);
        int right=check(root->right);
        int sum=left+right+root->val;
        mpp[sum]++;
        return sum;
    }
    vector<int> findFrequentTreeSum(TreeNode* root) {
        vector<int> res;
        check(root);
        int maxi=INT_MIN;
        for(auto it: mpp){
            if(maxi<it.second){
                maxi=it.second;
            }
        }
        for(auto it: mpp){
            if(maxi==it.second){
                res.push_back(it.first);
            }
        }
        return res;
    }
};