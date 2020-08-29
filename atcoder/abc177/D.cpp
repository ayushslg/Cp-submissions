#include<bits/stdc++.h>

#define Imposter ios_base::sync_with_stdio(false);cin.tie(NULL);
#define pb push_back
#define ll long long int
#define mp make_pair
#define se second
#define fi first

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#pragma GCC optimize("O3")
using namespace __gnu_pbds;
#define ordered_set tree<ll, null_type,less_equal<ll>, rb_tree_tag,tree_order_statistics_node_update>//s.order_of_key(val) *s.find_by_order(ind)

using namespace std;
#define f(n) for(ll i=0;i<n;i++)
#define rep(i,a,b) for(i=a;i<b;i++)
#define input(arr,n) for(ll i1=0;i1<n;i1++ )cin>>arr[i1]
#define vll vector<ll>
#define vlll vector<vll>
#define all(x) x.begin(),x.end()
const int maxx = 200005; 
vector<ll> adj[maxx]; 
ll power(ll x, ll y, ll p) {
    ll res = 1;    x = x % p;
    while(y > 0) {
        if(y & 1) res = (res*x) % p;
        y = y>>1;    x = (x*x) % p;
    } return res;
}
void dfs(int curr, int& cnt, int*  
             visited, vector<ll>& duringdfs) 
{ 
    visited[curr] = 1; 
  
    ++cnt; 
    duringdfs.push_back(curr); 
    for (auto& child : adj[curr]) { 
 
        if (visited[child] == 0) { 
            dfs(child, cnt, visited, duringdfs); 
        } 
    } 
} 
void MaximumVisit(ll n) 
{ 

    int visited[n+1]; 
    memset(visited, 0, sizeof visited); 
    int ans[n+1]; 
    memset(ans, 0, sizeof ans); 
    vector<ll> duringdfs;  
    for (int i = 1; i <= n; ++i) { 
        duringdfs.clear(); 
        int cnt = 0; 
        if (visited[i] == 0) { 
            cnt = 0; 
            dfs(i, cnt, visited, duringdfs); 
        } 
        for (auto& x : duringdfs) { 
            ans[x] = cnt; 
        } 
    } 
    ll maxi=*max_element(ans,ans+n+1);
    cout<<maxi<<endl;
    
    return; 
} 

int main()
{
    Imposter

    ll n,m;
    cin>>n>>m;set<pair<ll,ll>>s;
    f(m)
    {
        ll a,b;
        cin>>a>>b;
        if(s.find(make_pair(a,b))==s.end())
        {
            adj[a].pb(b);
            adj[b].pb(a);
        }
        s.insert(make_pair(a,b));

    }
    MaximumVisit(n); 
    return 0;
}
