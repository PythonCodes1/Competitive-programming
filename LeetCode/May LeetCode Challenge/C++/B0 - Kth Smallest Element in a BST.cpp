class Solution {
public:
    vector<int> my_vec;
    void getInorder(struct TreeNode* node) 
    { 
        if(!node)
            return;
        getInorder(node->left); 
        my_vec.push_back(node->val);
        getInorder(node->right);
    } 
    
    int kthSmallest(TreeNode* root, int k) {
        if(!root)
            return -1;
        getInorder(root);
        return my_vec[k-1];
            
    }
};
