#include<bits/stdc++.h>
using namespace std;

const int N = 1000055;
vector <int> adj[N];
int color[N];
int siz[N];
int n,m;
int c = 0;

int dfs(int x)
{
    if(color[x])
        return 0;
    color[x] = c;

    int ans = (x < n ? 1 : 0);

    for(auto y : adj[x])
        ans += dfs(y);
    return ans;
}

int main()
{
    cin >> n >> m;
    for(int i = 0 ; i < m ; i++)
    {
        int k;
        cin >> k;
        for(int j = 0 ; j < k ; j++)
        {
            int x;
            cin >> x;
            --x;
            adj[x].push_back(i+n);
            adj[i+n].push_back(x);
        }
    }
    for(int i = 0 ; i < n ; i++)
    {
        if(!color[i])
        {
            c++;
            siz[c] = dfs(i);
        }
        cout << siz[color[i]] << " ";
    }
    cout << endl;



    return 0;
}
