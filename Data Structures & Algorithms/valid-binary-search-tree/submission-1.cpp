class Solution {
private:
    TreeNode* prev = nullptr; // 记录前一个节点

public:
    bool isValidBST(TreeNode* root) {
        if (root == nullptr) return true;
        
        // 中序遍历左子树
        if (!isValidBST(root->left)) return false;
        
        // 如果当前节点小于等于前一个节点，则不是BST
        if (prev != nullptr && root->val <= prev->val) return false;
        
        prev = root; // 更新前一个节点
        
        // 中序遍历右子树
        return isValidBST(root->right);
    }
};