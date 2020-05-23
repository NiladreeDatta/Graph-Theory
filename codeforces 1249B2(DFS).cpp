#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while(tc--)
    {
        int n;
        cin >> n;
        vector <int> p(n);
        for(int i = 0 ; i < n ; i++)
        {
            cin >> p[i];
            p[i]--;
        }
        vector <int> vis(n);
        vector <int> ans(n);
        for(int j = 0 ; j < n ; j++)
        {
            if(!vis[j])
            {
                vector <int> cur;
                while(!vis[j])
                {
                    cur.push_back(j);
                    vis[j] = true;
                    j = p[j];
                }
                for(auto i : cur ) ans[i] = cur.size();
            }
        }
        for(int j = 0  ; j < n ; j++) cout << ans[j] << " ";
        cout << endl;
    }

    return 0;
}
