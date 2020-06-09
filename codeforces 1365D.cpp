#include<bits/stdc++.h>
using namespace std;
int n,m,cnt=0;
string s[54];
void dfs(int y,int x)
{
    if(y>n||y<1||x>m||x<1)return;
    if(s[y][x]=='B'||s[y][x]=='#')return;
    if(s[y][x]=='G')cnt--;
    s[y][x]='#';
    dfs(y-1,x);
    dfs(y+1,x);
    dfs(y,x-1);
    dfs(y,x+1);
}
void solve()
{

    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        cin>>s[i];
        s[i]="#"+s[i];
    }cnt=0;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
    {
        if(s[i][j]=='B'||s[i][j]=='#')continue;
        if(s[i][j]=='G')cnt++;
        if(s[i-1][j]=='B'&&i-1>=1)s[i][j]='#';
        if(s[i+1][j]=='B'&&i+1<=n)s[i][j]='#';
        if(s[i][j-1]=='B'&&j-1>=1)s[i][j]='#';
        if(s[i][j+1]=='B'&&j+1<=m)s[i][j]='#';
    }
    dfs(n,m);
    if(cnt)cout<<"NO";else cout<<"YES";
    cout<<"\n";
}
int main()
{
    int t;
    cin>>t;
    while(t--)
        solve();
    }
