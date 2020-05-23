#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin >> n >> m;
    int a[n+1] = {0};
    while(m--)
    {
        int x,y;
        cin >> x >> y;
        a[x] = 1;
        a[y] = 1;
    }
    int p;
    for(int i = 1 ; i <= n ; i++)
    {
        if(a[i] == 0)
        {
            p = i;
            break;
        }
    }
    cout << n-1 << endl;
    for(int i = 1 ; i <= n ; i++)
    {
        if(i != p)
        {
            cout << p << " " << i << endl;
        }
    }

    return 0;
}
