class Solution {
public:
    int goodNodes(TreeNode* root) {
        int ans = 0; // 放到局部变量，每次调用自动重置
        dfs(root, -10001, ans); // 初始值给够小
        return ans;
    }

    void dfs(TreeNode* root, int mval, int& ans) { // ans 改为引用传递
        if (nullptr == root) {
            return;
        }

        if (root->val >= mval) {
            ans++;
            mval = root->val; // 更新路径最大值
        }

        dfs(root->left, mval, ans);
        dfs(root->right, mval, ans);
    }
};