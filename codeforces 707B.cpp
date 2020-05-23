#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,k;
    cin >> n >> m >> k;
    int u[m+10],v[m+10],l[m+10];
    for(int i = 1 ; i <= m ; i++) cin >> u[i] >> v[i] >> l[i];
    int gudam[n+1] = {0};
    for(int i = 1 ; i <= k ; i++)
    {
        int x;
        cin >> x;
        gudam[x] = 1;
    }
    //for(int i = 1 ; i <= n ; i++)
    //    cout << gudam[i] << " ";
    //cout << endl;
    int ans = INT_MAX;
    for(int i = 1 ; i <= m ; i++)
    {
        if(gudam[u[i]] != gudam[v[i]])
        {
            ans = min(ans,l[i]);
        }
    }
    if(ans == INT_MAX)
    {
        cout << -1 << endl;
    }
    else cout << ans << endl;
    return 0;
}
