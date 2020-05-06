#include<bits/stdc++.h>
using namespace std;
int a[105],b[105],n,vis[105];
void dfs(int m)
{
    vis[m] = 1;
    for(int i = 1 ; i <= n ; i++)
    {
        if((a[i] == a[m] || b[i] == b[m]) and !vis[i]) dfs(i);
    }
}

int main()
{
    cin >> n;
    for(int i = 1 ; i <= n ; i++) cin >> a[i] >> b[i];
    int ans = -1;
    for(int i = 1 ; i <= n ; i++)
    {
        if(!vis[i])
        {
            dfs(i);
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
}
