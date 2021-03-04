#include<bits/stdc++.h>
#define Imposter ios_base::sync_with_stdio(false);cin.tie(NULL);
#define pb push_back
#define ll long long int
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#pragma GCC optimize("O3")
using namespace __gnu_pbds;
#define ordered_set tree<ll, null_type,less_equal<ll>, rb_tree_tag,tree_order_statistics_node_update>//s.order_of_key(val) *s.find_by_order(ind)
using namespace std;
#define f(n) for(ll i=0;i<n;i++)
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define input(arr,n) for(ll i1=0;i1<n;i1++ )cin>>arr[i1]
#define endl "\n"
#define vll vector<ll>
#define vlll vector<vll>
#define all(x) x.begin(),x.end()
ll power(ll x, ll y, ll p) { 
    ll res = 1;    x = x % p;  
    while(y > 0) {
        if(y & 1) res = (res*x) % p; 
        y = y>>1;    x = (x*x) % p; 
    } return res; 
}
int  n,m,x,y,d,tc=1,q,cs=1;
const int N=1e5+5;
 
vector<vector<int> >g[N];
 
ll dist[N];
int taken[N];
inline void solve()
{
	
	cin>>n>>m>>x>>y;
	f(n+2)
		dist[i]=-1;
	
	int u,v,t,k;
	f(m)
	{
		cin>>u>>v>>t>>k;
		g[u].pb({v,t,k});
		g[v].pb({u,t,k});
	}
	
	priority_queue<pair<ll,int> >pq;
	pq.push({0,x});
	dist[x]=0;
 
	while(!pq.empty())
	{
		pair<ll,int>tp=pq.top();
		pq.pop();
		int from=tp.second;
		if(taken[from])continue;
		taken[from]=1;
		int len=int(g[from].size());
		f(len)
		{
			// some code goes here
			int node=g[from][i][0];
			ll temp=g[from][i][1]+dist[from];
			ll kk=g[from][i][2];
			if(dist[from]%kk)
			{
				ll rem=dist[from]%kk;
				temp+=kk-rem;
			}
			if(dist[node]==-1 or temp<dist[node])
			{
				dist[node]=temp;
				pq.push({-temp,node});
			}
		}
	}
 
 
	cout<<dist[y]<<"\n";
	return;
	
} // end func
int main()
{
    Imposter
    
    int t=1;
    //cin>>t;
    while(t--)
    {
        solve();
        
    }
    return 0;
}