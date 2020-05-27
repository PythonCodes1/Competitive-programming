class Solution {
public:
    
    TreeNode* newNode(int x)
    {
        TreeNode *node = new TreeNode();
        node->val = x;
        node->left = NULL;
        node->right = NULL;
        return node;
    }
    
    TreeNode* bst(TreeNode* &root, int x)
    {
        if(root == NULL)
            return root = newNode(x);
        
        if(root->val > x)
            root->left = bst(root->left,x);
        else
            root->right = bst(root->right,x);
        
        return root;
    }
    
    TreeNode* bstFromPreorder(vector<int>& preorder) 
    {
        TreeNode *root = NULL;
        
        for(auto &x:preorder)
            bst(root, x);
        
        return root;
    }
};
