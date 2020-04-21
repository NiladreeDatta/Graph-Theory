#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
typedef long long LL;
const int maxn=2e5+10;
vector<int>e[maxn];
bool cmp(int a,int b)
{
	return a>b;
}
int n,k,u,v,depth[maxn],siz[maxn];
int f[maxn];
int vis[maxn];
void dfs(int x)
{
	vis[x]=1;
	for(int i=0;i<e[x].size();i++)
	{
		int to=e[x][i];
		if(!vis[to])
		{
			vis[to]=1;
			depth[to]=depth[x]+1;
			dfs(to);
			siz[x]+=siz[to]+1;
		}
	}

}

int main(void)
{
	cin>>n>>k;
	for(int i=1;i<n;i++)
	{
		cin>>u>>v;
		e[u].push_back(v);
		e[v].push_back(u);
	}
	dfs(1);

	for(int i=1;i<=n;i++)
		f[i]=depth[i]-siz[i];

	sort(f+1,f+n+1,cmp);
	LL ans=0;

	for(int i=1;i<=k;i++)
		ans+=f[i];

	cout<<ans<<endl;
    return 0;
}
