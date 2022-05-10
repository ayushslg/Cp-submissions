#include<bits/stdc++.h>
#define Imposter ios_base::sync_with_stdio(false);cin.tie(NULL);
#define pb push_back
#define ll long long int
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
    while (y > 0) {
        if (y & 1) res = (res * x) % p;
        y = y >> 1;    x = (x * x) % p;
    } return res;
}
ll ans = 0;
pair<int, int> dfs(int u, vector<int>adj[], string s, vector<bool>& vis)
{
    vis[u] = true;
    pair<int, int>p = {0, 0};
    for (auto i : adj[u])
    {
        if (!vis[i])
        {
            pair<int, int> q = dfs(i, adj, s, vis);
            p.first += q.first;
            p.second += q.second;
        }
    }

    if (s[u - 1] == 'B')
        p.first++;
    else
        p.second++;
    if (p.first == p.second)
        ans++;
    return p;



}
inline void solve()
{
    ll n;
    ans = 0;
    cin >> n;
    vector<int>adj[n + 1];
    for (int i = 2; i <= n; i++)
    {
        int v;
        cin >> v;
        adj[i].push_back(v);
        adj[v].push_back(i);
    }
    string s;
    cin >> s;
    vector<bool>vis(n + 1, false);
    if (s[0] == 'B')
        dfs(1, adj, s, vis);
    else
        dfs(1, adj, s, vis);
    cout << ans << endl;
}
int main()
{
    Imposter

    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();

    }
    return 0;
}