class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        // Only recursion thing 
         if (p == NULL && q == NULL ){
            return true ; 
         }
         if (p == NULL || q == NULL ){
            return false ; 
         }
         // FIX 1: Check for inequality instead of equality.
         // If values don't match, return false. If they do match, let it proceed to check the subtrees.
         if (p->val != q->val ) {
            return false ; 
         }

         // FIX 2: Added the missing semicolon at the end of the statement.
         return isSameTree(p->left, q->left) && isSameTree (p->right  , q->right);
         
    }
};
