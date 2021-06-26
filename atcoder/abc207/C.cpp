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
#define ld long double
ll power(ll x, ll y, ll p) {
    ll res = 1;    x = x % p;
    while (y > 0) {
        if (y & 1) res = (res * x) % p;
        y = y >> 1;    x = (x * x) % p;
    } return res;
}
inline void solve()
{
    ll n;
    cin >> n;
    vector<pair<ld, ld>>vb(n);
    f(n)
    {
        ll t;
        cin >> t;
        ld l, r;
        cin >> l >> r;
        if (t == 2)
            r -= 0.5;
        if (t == 3)
            l += 0.5;
        if (t == 4)
        {
            l += 0.5, r -= 0.5;
        }
        vb[i].second = l, vb[i].first = r;
    }
    sort(all(vb));
    ll ans = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (vb[j].second <= vb[i].first)
                ans++;
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