#include<bits/stdc++.h>
using namespace std;
int main()
{
    set <int> s;
    int n;
    cin >> n;
    int ans = 0;
    for(int i = 1 ; i <= n ; i++)
    {
        int x;
        cin >> x;
        if(x == i)
            ans ++;
        else
            s.insert(x);
    }
    cout << ans + s.size()/2 << endl;

    return 0;
}
