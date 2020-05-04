#include<bits/stdc++.h>
using namespace std;
const int N = 2e5 + 10;
vector <int> adj[N];
bool visited[N];
void bfs(int n)
{
    queue <int> q;
    visited[n] = true;
    q.push(n);
    while(!q.empty())
    {
        int v = q.front();
        q.pop();
        for(int x : adj[v])
        {
            if(!visited[x])
            {
                visited[x] = true;
                q.push(x);
                cout << v << " " << x << endl;
            }
        }

    }

}


int main()
{
    int n,m,mx = 0,a,b;
    cin >> n >> m;
    while(m--)
    {
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    int mxnode;
    for(int i = 1 ; i <= n ; i++)
    {
        if(adj[i].size() > mx)
        {
            mx = adj[i].size();
            mxnode = i;
        }
    }
    bfs(mxnode);
    return 0;
}
