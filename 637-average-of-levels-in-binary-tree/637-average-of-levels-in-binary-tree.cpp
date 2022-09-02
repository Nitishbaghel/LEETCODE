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
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double> arr;
        queue<TreeNode*> arr1;
        arr1.push(root);
        while(!arr1.empty()){
            long temp=0;
            int len= arr1.size();
            for(int i=0;i<len;i++){
                TreeNode * node = arr1.front();
                arr1.pop();
                if(node->left!=NULL) arr1.push(node->left);
                if(node->right!=NULL) arr1.push(node->right);
                temp+=node->val;
            }
            arr.push_back((double)temp/len);
        }
        return arr;
    }
};