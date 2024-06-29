void DFS(int currentAncestor, unordered_map<int, vector<int>>& adj, int currNode, vector<vector<int>>& result) {
    for (int& neighbor : adj[currNode]) {
        if (result[neighbor].empty() || result[neighbor].back() != currentAncestor) {
            result[neighbor].push_back(currentAncestor);
            DFS(currentAncestor, adj, neighbor, result);
        }
    }
}

vector<vector<int>> getAncestors(int n, vector<vector<int>>& edges) {
    vector<vector<int>> result(n);
    unordered_map<int, vector<int>> adj;

    for (vector<int>& edge : edges) {
        int a = edge[0];
        int b = edge[1];
        adj[a].push_back(b);
    }

    for (int i = 0; i < n; i++) {
        DFS(i, adj, i, result);
    }

    return result;
}