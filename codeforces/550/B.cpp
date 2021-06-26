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
    ll n, l, r, x;
    cin >> n >> l >> r >> x;
    vll a(n);
    input(a, n);
    ll ans = 0;
    for (ll bit = 0; bit < (1 << n); bit++)
    {
        ll q = 0, maxi = 0, mini = 1e10, tot = 0;
        for (ll i = 0; i < n; i++)
        {
            if (bit & (1 << i))
            {
                tot += a[i];
                maxi = max(maxi, a[i]);
                mini = min(mini, a[i]);
                q++;
            }
        }
        if (q >= 2 and tot <= r and tot >= l and (maxi - mini) >= x)
            ans++;
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