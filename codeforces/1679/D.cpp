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
    ll n, m, k;
    cin >> n >> m >> k;
    vector<ll>adj[n + 1];
    vector<ll>a(n + 1, 0);
    ll low = 0, high = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i + 1];
        high = max(high, a[i + 1]);
    }
    vector<pair<ll, ll>>vb(m);
    for (int i = 0; i < m; i++)
    {
        ll u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        vb[i].first = u;
        vb[i].second = v;
    }
    int ans = -1;
    function<bool(ll)> get = [&] (ll may)
    {
        vector<int>in(n + 1, 0);
        int tot = 0;
        for (int i = 1; i <= n; i++)
        {
            if (a[i] <= may)
                tot++;
        }
        queue<ll>q;
        vector<ll>dp(n + 1, 0);
        for (int i = 0; i < m; i++)
        {
            if (a[vb[i].first] <= may && a[vb[i].second] <= may)
                in[vb[i].second]++;
        }
        for (int i = 1; i <= n; i++)
        {
            if (a[i] <= may && in[i] == 0)
                q.push(i);
        }
        while (!q.empty())
        {
            int v = q.front();
            q.pop();
            dp[v]++;
            tot--;
            for (auto u : adj[v])
            {
                if (a[u] <= may)
                {
                    dp[u] = max(dp[u], dp[v]);
                    in[u]--;
                    if (in[u] == 0)
                        q.push(u);
                }
            }
        }
        if (tot != 0) return true;
        for (int i = 1; i <= n; i++)
            if (dp[i] >= k)
                return true;
        return false;
    };
    while (low <= high)
    {
        ll mid = (low + high) / 2;
        if (get(mid))
        {
            ans = mid;
            high = mid - 1;
        }
        else
            low = mid + 1;
    }
    cout << ans << endl;


}
int main()
{
    Imposter

    int t = 1;
    //cin>>t;
    while (t--)
    {
        solve();

    }
    return 0;
}