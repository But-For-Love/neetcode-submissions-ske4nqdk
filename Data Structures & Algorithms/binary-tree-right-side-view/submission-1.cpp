class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        vector<int> ans;
        if (!root) return ans;

        queue<TreeNode*> q;
        q.push(root);

        while (!q.empty()) {
            int sz = q.size(); // 当前层的节点数
            for (int i = 0; i < sz; i++) {
                TreeNode* node = q.front();
                q.pop();

                // 每层的最后一个节点就是右视图能看到的节点
                if (i == sz - 1) {
                    ans.push_back(node->val);
                }

                // 只把非空子节点加入队列
                if (node->left) q.push(node->left);
                if (node->right) q.push(node->right);
            }
        }
        return ans;
    }
};