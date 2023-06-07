class Solution
{
    public:
    int minDiff(Node *root, int K)
    {
        int ans = 1e9;
        
        function<void(Node *)> dfs = [&](Node * current) {
            if(current == nullptr)
                return;
            
            ans = min(ans, abs(current -> data - K));
            if(K < current -> data)
                dfs(current -> left);
            else
                dfs(current -> right);
        };
        
        dfs(root);
        
        return ans;
    }
};