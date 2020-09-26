#include<bits/stdc++.h>
using namespace std;
#define ll long long int
vector<int>adj[1000001];
bool vis[1000001];
void dfs(int n)
{
    vis[n]=true;
    for(int a: adj[n])
    {
        if(vis[a]==0)
        dfs(a);
    }
}
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    int n,e;
    cin>>n>>e;
    for(int i=0;i<e;i++)
    {
        int x,y;
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    int ans=0;
    for(int i=0;i<=n;i++)
    vis[i]=0;
    for(int i=1;i<=n;i++)
    {
        if(vis[i]==0)
        {
            dfs(i);
            ans++;
        }
    }
    cout<<ans-1<<"\n";
    return 0;
    
}