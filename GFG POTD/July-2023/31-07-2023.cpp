class Solution {
public:
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        queue<int> q;
        vector<int> out;
        vector<bool> vis(V, false);
        vis[0] = true;
        q.push(0);

        while (!q.empty()) {
            int front = q.front();
            q.pop();
            out.push_back(front);

            for (auto node : adj[front]) {
                if (!vis[node]) {
                    vis[node] = true;
                    q.push(node);
                }
            }
        }

        return out;
    }
};
