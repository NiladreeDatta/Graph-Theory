#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector <int> p(n),deg(n),sons_leaves(n);
    for(int i = 1 ; i < n ; i++)
    {
        cin >> p[i];
        p[i]--;
        deg[p[i]]++;
    }
    for(int i =0 ; i < n ; i++)
    {
        if(deg[i] == 0)
        {
            sons_leaves[p[i]]++;
        }
    }
    for(int i = 0 ; i < n ; i++)
    {
        if(deg[i] != 0 && sons_leaves[i] < 3)
        {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;

    return 0;
}
