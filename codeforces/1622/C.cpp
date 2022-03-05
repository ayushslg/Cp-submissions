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
    ll n, k;
    cin >> n >> k;
    vll a(n);
    input(a, n);
    ll sum = accumulate(all(a), 0ll);
    if (sum <= k)
    {
        cout << 0 << endl;
        return;
    }
    if (n == 1)
    {
        cout << max(0ll, a[0] - k) << endl;
        return;
    }
    sort(all(a));
    ll mini = a[0];
    vll pref(n, 0);
    pref[0] = a[0];
    for (int i = 1; i < n; i++)
        pref[i] = pref[i - 1] + a[i];
    ll ans = 1e18;
    for (int i = 0; i < n; i++)
    {
        ll p = k - pref[n - i - 1] + a[0];
        ll q = p / (i + 1);
        if ((q * (i + 1)) > p)
            q--;

        ans = min(ans, i + max(0ll, a[0] - q));
    }
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