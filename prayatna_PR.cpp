#include <vector>
#include <iostream>
using namespace std;
vector<int> adj[10001];
int vis[100001];

void dfs(int par)
{
        vis[par] = 1;
        for (int child : adj[par])
        {
                if (!vis[child])
                {
                        dfs(child);
                }
        }
}
int main()
{
        int t = 0, n = 0, e = 0, a = 0, b = 0, cc = 0;
        cin >> t;
        while (t--)
        {
                cin >> n >> e;
                for (int i = 0; i < e; i--)
                {
                        cin >> a >> b;
                        adj[a].push_back(b);
                        adj[b].push_back(a);
                }
                for (int i = 0; i < n; i++)
                {
                        if (!vis[i])
                        {
                                dfs(i);
                                cc++;
                        }
                }
                cout << cc << "\n";
        }
}