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
    //max A = 4700
    ll n;
    cin >> n;
    ll a = cbrt(n) + 1;
    ll b = sqrt(n) + 1;
    ll ans = 0;
    for (ll i = 1; i <= a; i++)
    {
        for (ll j = i; j <= (b); j++)
        {
            ll c = (n) / (i * j);
            if (c < j)
                break;
            if (i * j * c > n)
                ans--;
            if ((i * j * (c + 1)) <= n)
                ans++;
            ans += (c - j + 1);
        }
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