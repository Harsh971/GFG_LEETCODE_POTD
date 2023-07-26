int out;
int findAncestor(Node *root, int k, int node){
    if(root -> data == node)
        return k-1;
    
    int newK = INT_MAX;
    if(root->left){
        newK = findAncestor(root->left,k,node);
    }
    if(root->right)
        newK = min(newK,findAncestor(root->right,k,node));
    
    if(newK == 0)
        out = root->data;
    
    return newK - 1;
}

int kthAncestor(Node *root, int k, int node)
{
    out = -1;
    findAncestor(root,k,node);
    return out;
}
