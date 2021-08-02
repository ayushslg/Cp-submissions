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
ll left(ll n)
{
    while (n % 2 == 0)
    {
        n = n / 2;
    }
    while (n % 5 == 0)
    {
        n = n / 5;
    }
    while (n % 3 == 0)
    {
        n = n / 3;
    }
    return n;
}
ll counttwo(ll n, ll q)
{
    ll res = 0;
    while (n % q == 0)
    {

        n = n / q;
        res++;
    }
    return res;
}

inline void solve()
{

    ll n, m;
    cin >> n >> m;
    vll a(n);
    input(a, n);
    vll b(m);
    input(b, m);
    sort(all(a));
    ll ans = 1e18;
    for (int i = 0; i < m; i++)
    {
        ll q = upper_bound(a.begin(), a.end(), b[i]) - a.begin();
        // cout << q << endl;
        if (q < n)
            ans = min(ans, (ll)abs(a[q] - b[i]));
        if ((q - 1) >= 0)
        {
            ans = min(ans, (ll)abs(a[q - 1] - b[i]));
            //cout << b[i] << endl;
        }
    }
    cout << ans << endl;
}
int main()
{
    Imposter

    int t = 1;
    //cin >> t;
    while (t--)
    {
        solve();

    }
    return 0;
}
