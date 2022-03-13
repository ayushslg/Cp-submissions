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

    ll n, m;
    cin >> n >> m;
    vector<pair<int, int>>vb(m);
    map<ll, ll>mp;
    for (int i = 0; i < m; i++)
    {
        cin >> vb[i].second >> vb[i].first;
        mp[vb[i].second] = i + 1;
    }
    sort(all(vb));
    ll ans = 0;
    vector<ll>pri;
    for (int i = 0; i < 2 * n; i++)
    {
        ans += vb[i].first;
        pri.push_back(vb[i].second);
    }
    sort(all(pri));
    cout << ans << endl;
    for (int i = 0; i < n; i++)
    {
        cout << mp[pri[i]] << " " << mp[pri[2 * n - i - 1]] << endl;
    }
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