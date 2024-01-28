#include<bits/stdc++.h>
using namespace std;

vector<int> bfsTraversal(int vertex, vector<vector<int>> &adj)
{
    vector<int> vis(vertex, 0); // Initialize vis with size vertex and all elements as 0
    queue<int> q;
    q.push(0);
    vis[0] = 1;
    vector<int> bfs;
    while (!q.empty())
    {
        int from = q.front();
        q.pop();

        bfs.push_back(from);

        for (auto it : adj[from])
        {
            if (!vis[it])
            {
                vis[it] = 1;
                q.push(it);
            }
        }
    }

    return bfs;
}

int main()
{
    vector<vector<int>> adj{{1}, {0, 2, 3}, {1, 4}, {1, 5}, {2}, {3}};
    vector<int> ans = bfsTraversal(adj.size(), adj); // Pass adj.size() as the vertex count
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;

    return 0;
}

// 0 1
// 0 2
// 0 3
// 1 4
// 1 7
// 2 5
// 3 6
