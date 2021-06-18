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
    vll vb;
    vector<bool>prime(52, true);
    for (int i = 2; i * i <= 51; i++)
    {
        if (prime[i])
        {
            for (int j = i * i; j <= 51; j += i)
            {
                prime[j] = false;
            }
        }
    }
    for (int i = 2; i <= 51; i++)
    {
        if (prime[i])
            vb.pb(i);
    }
    ll n;
    cin >> n;
    vll a(n);
    input(a, n);
    ll q = vb.size();
    ll ans = 1e18;
    for (int i = 0; i < (1 << q); i++)
    {
        ll y = 1;
        for (int j = 0; j < 15; j++)
        {
            if (i & (1 << j)) y = y * vb[j];
        }
        bool ok = true;
        for (int j = 0; j < n; j++)
        {
            if (__gcd(a[j], y) == 1)
                ok = false;
        }
        if (ok)
            ans = min(ans, y);
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