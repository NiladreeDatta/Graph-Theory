#include<bits/stdc++.h>
using namespace std;
const int mx = 2e5 + 10;
int u[mx],v[mx],deg[mx];
int main()
{
    int n;
    cin >> n;
    for(int i = 1 ; i <= n-1 ; i++)
    {
        cin >> u[i] >> v[i];
        deg[u[i]]++;
        deg[v[i]]++;
    }
    int l = 0, r = n-2;
    for(int i  = 1 ; i <= n-1 ; i++)
    {
        if(deg[u[i]] == 1 || deg[v[i]] == 1)
            cout << l++ << endl;
        else cout << r-- << endl;
    }
    return 0;
}
