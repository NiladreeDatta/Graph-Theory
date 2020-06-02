#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while(tc--)
    {
        int n,x;
        cin >> n >> x;
        int deg[n+1] = {0};
        for(int i = 1 ; i <= n- 1 ; i++)
        {
            int u,v;
            cin >> u >> v;
            deg[u]++;
            deg[v]++;
        }
        /*for(int i = 0 ; i < n ; i++)
            cout << deg[i] << " ";
        cout << endl;*/
        if(deg[x] <= 1)
        {
            cout << "Ayush" << endl;
        }
        else
        {
            if(n%2 == 1)
            {
                cout << "Ashish" << endl;
            }
            else cout << "Ayush" << endl;
        }
    }


    return 0;
}
