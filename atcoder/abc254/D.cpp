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
    int n;
    cin >> n;
    vector<bool> sq(n + 1, false);
    for (int i = 1; i * i <= n; i++) sq[i * i] = true;
    vector<vector<int>> d(n + 1);
    for (int i = 1; i <= n; i++) {
        for (int j = i; j <= n; j += i) d[j].push_back(i);
    }
    vector<int> cnt(n + 1);
    for (int i = 1; i <= n; i++) {
        int f = 0;
        for (int j = 0; j < d[i].size(); j++) if (sq[d[i][j]]) f = d[i][j];
        cnt[i / f]++;
    }
    int ans = 0;
    for (int i = 1; i <= n; i++) ans += cnt[i] * cnt[i];
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