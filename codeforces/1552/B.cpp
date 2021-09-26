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
    ll n;
    cin >> n;
    vector<vector<int>>vb(n, vector<int>(5));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < 5; j++)
            cin >> vb[i][j];
    ll ans = -1;
    vector<int>check = vb[0];
    for (int i = 1; i < n; i++)
    {
        int q = 0;
        for (int j = 0; j < 5; j++)
        {
            if (check[j] < vb[i][j])
                q++;
        }
        if (q >= 3)
            continue;
        check = vb[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (vb[i] == check)
        {
            ans = i + 1;
            continue;
        }
        int q = 0;
        for (int j = 0; j < 5; j++)
        {
            if (check[j] < vb[i][j])
                q++;
        }
        if (q >= 3)
            continue;
        cout << -1 << endl;
        return;
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