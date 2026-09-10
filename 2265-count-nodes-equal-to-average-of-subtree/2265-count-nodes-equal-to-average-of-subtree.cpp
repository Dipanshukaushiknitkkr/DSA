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
    pair<int,int> dfs(TreeNode* root,int& cnt){
        if(root==NULL) return {0,0};
        auto it1=dfs(root->left,cnt);
        auto it2=dfs(root->right,cnt);
        int sum=root->val+it1.first+it2.first;
        int size=it1.second+it2.second+1;
        if(sum/size==root->val) cnt++;

        return {sum,size};
    }
    int averageOfSubtree(TreeNode* root) {
        int cnt=0;
        dfs(root,cnt);
        return cnt;
    }
};