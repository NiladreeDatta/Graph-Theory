#include<bits/stdc++.h>
using namespace std;
const int mx = 1e5 + 12;
bool vis[mx];
vector <int> adj[mx];
int n;
int c[mx];
int ans;
void dfs(int u,int col)
{
    ans += (c[u] != col);
    for(int i = 0 ; i < adj[u].size() ; i++)
    {
        int v = adj[u][i];
        dfs(v,c[u]);
    }
}
int main()
{
    cin >> n;
    for(int i = 1 ; i < n ; i++)
    {
        int a;
        cin >> a;
        a--;
        adj[a].push_back(i);// color -> node
        //adj[i].push_back(a);// color -> node
    }
    for(int i = 0 ; i < n ; i++) cin >> c[i];
    dfs(0,0);
    cout << ans << endl;
    return 0;
}
