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
ll find(vector<vector<ll>>&a, ll n, ll m, ll i, ll j)
{
    ll currx = i - 1, curry = j - 1, chk = 0;
    while (currx >= 0 and curry >= 0)
    {
        chk += a[currx--][curry--];
    }
    currx = i - 1, curry = j + 1;
    while (currx >= 0 and curry < m)
    {
        chk += a[currx--][curry++];
    }
    currx = i + 1, curry = j - 1;
    while (currx<n and curry >= 0)
    {
        chk += a[currx++][curry--];
    }
    currx = i + 1, curry = j + 1;
    while (currx < n and curry < m)
    {
        chk += a[currx++][curry++];
    }
    return chk;
}

inline void solve()
{
    ll n, m;
    cin >> n >> m;
    vector<vector<ll>>a(n, vector<ll>(m, 0));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cin >> a[i][j];
    }
    ll ans = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            ans = max(ans, a[i][j] + find(a, n, m, i, j));
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