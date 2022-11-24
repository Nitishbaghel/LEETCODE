class Solution {
public:
	bool isleaf(TreeNode* root){
		return (!root->left && !root->right);
	}
	void chk(vector<vector<int>>&v, vector<int>&a, TreeNode* root){
		if(!root){return;}
		a.push_back(root->val);
		if(isleaf(root)){v.push_back(a);}
		chk(v, a, root->left);
		chk(v, a, root->right);
		a.pop_back();
		return;
	}
	vector<string> binaryTreePaths(TreeNode* root) {
		vector<vector<int>>v;
		vector<int>a;
		chk(v, a, root);
		vector<string>ans;
		for(int i=0; i<v.size(); i++){
			string x="";
			for(int j=0; j<v[i].size(); j++){
				x+=to_string(v[i][j]);
				x+='-'; x+='>';
			}
			x.pop_back();
			x.pop_back();
			ans.push_back(x);
		}
		return ans;
	}
};