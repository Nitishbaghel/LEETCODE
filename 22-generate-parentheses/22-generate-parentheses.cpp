class Solution {
public:
      vector<string> generateParenthesis(int n) {
        this->n = n;
        string s; s.reserve(n);
        dfs(s, 0, 0);
        return ans;
    }
private:
    vector<string> ans;
    int n = 0;
    
    void dfs(string& s, int l, int r) {
        if (l == n && r == n) {
            ans.push_back(s);
            return;
        }
        if (l < n) {
            s.push_back('(');
            dfs(s, l+1, r);
            s.pop_back();
        }
        if (r < l) {
            s.push_back(')');
            dfs(s, l, r+1);
            s.pop_back();
        }
    }
};