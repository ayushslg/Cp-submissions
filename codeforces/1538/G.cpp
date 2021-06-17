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
    ll x, y, a, b;
    cin >> x >> y >> a >> b;
    if (a == b)
    {
        cout << min(x, y) / a << endl;
        return;
    }
    if (a < b)
        swap(a, b);
    ll l = 0, r = 1e9, ans;
    while (l <= r)
    {
        ll m = ((r + l) / 2);
        ll q = ceill((long double)(y - m * a) / (b - a));
        ll z = floorl((long double)(x - m * b) / (a - b));
        q = max(q, 0ll);
        z = min(z, m);
        if (q <= z)
        {
            ans = m;
            l = m + 1;
        }
        else
        {
            r = m - 1;
        }
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