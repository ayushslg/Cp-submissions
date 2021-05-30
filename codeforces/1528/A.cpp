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
const int N = 2e5 + 5;
ll vb[2][N], dp[2][N];
inline void solve()
{
    ll n;
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> vb[0][i] >> vb[1][i];
    vector<ll>adj[n + 1];
    f(n - 1)
    {
        ll u, v;
        cin >> u >> v;
        adj[u].pb(v);
        adj[v].pb(u);
    }
    function<void(int, int)> dfs = [&](int curr, int par)
    {
        dp[0][curr] = 0;
        dp[1][curr] = 0;
        for (auto it : adj[curr])
        {
            if (it != par)
            {   
                dfs(it, curr);
                dp[0][curr] += max((dp[0][it] + (ll)abs(vb[0][curr] - vb[0][it])), (dp[1][it] + (ll)abs(vb[0][curr] - vb[1][it])));
                dp[1][curr] += max((dp[0][it] + (ll)abs(vb[1][curr] - vb[0][it])), (dp[1][it] + (ll)abs(vb[1][curr] - vb[1][it])));
            }
        }
    };
    dfs(1, -1);
    cout << max(dp[0][1], dp[1][1]) << endl;


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