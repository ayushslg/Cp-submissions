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

    ll n, m, ans = 0;
    cin >> n >> m;
    map<ll, ll>mp;
    for (int i = 0; i < m; i++)
    {
        ll u, v;
        cin >> u >> v;
        u = min(u, v);
        mp[u]++;
        if (mp[u] == 1)
            ans++;
    }
    ll q;
    cin >> q;
    while (q--)
    {
        int t;
        cin >> t;
        if (t == 3)
        {
            cout << n - ans << endl;
        }
        if (t == 1)
        {
            ll u, v;
            cin >> u >> v;
            u = min(u, v);
            mp[u]++;
            if (mp[u] == 1) ans++;
        }
        if (t == 2)
        {
            ll u, v;
            cin >> u >> v;
            u = min(u, v);
            mp[u]--;
            if (mp[u] == 0)
                ans--;
        }
    }
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
