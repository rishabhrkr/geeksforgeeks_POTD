class Solution{
  public:
    /*You are required to complete this method*/
    int maxDepth(Node *root) {
        if(root == NULL) return 0;
        
        int l = maxDepth(root  -> left);
        int h = maxDepth(root ->  right);
        
        return 1  +max(l,h);
    }
};
