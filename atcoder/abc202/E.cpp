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
inline void solve()
{
    int n;
    cin >> n;
    vector<int>adj[n];
    f(n - 1)
    {
        int u;
        cin >> u;
        --u;
        adj[u].pb(i + 1);
    }
    int t = 0;
    vector<int>in(n), out(n);
    vector<vector<int>>dps(n);
    function<void(int, int)> dfs = [&](int u, int dep)
    {
        in[u] = t++;
        dps[dep].push_back(in[u]);
        for (auto v : adj[u])
            dfs(v, dep + 1);
        out[u] = t++;
    };
    dfs(0, 0);
    int q;
    cin >> q;
    while (q--)
    {
        int u, d;
        cin >> u >> d;
        --u;
        cout << lower_bound(all(dps[d]), out[u]) - lower_bound(all(dps[d]), in[u]) << endl;
    }



}
int main()
{
    Imposter

    int t = 1, i = 1;
    //cin >> t;
    while (t--)
    {
        //cout << "Case #" << i << ": ";
        solve();
        ++i;

    }
    return 0;
}