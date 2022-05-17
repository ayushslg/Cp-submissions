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
    vll a(n + 1);

    for (int i = 1; i <= n; i++)
        cin >> a[i];

    ll ans1 = 0;

    if (n == 2)
    {
        cout << min(a[1], a[2]);
        return;
    }

    vector<ll>dp(n + 2, 0);

    dp[1] = a[1];
    dp[2] = a[1];

    for (int i = 3; i <= n; i++)
    {
        dp[i] = min(dp[i - 1] + a[i], dp[i - 2] + a[i - 1]);
    }

    ans1 = dp[n];

    dp[0] = dp[1] = a[n];

    a[0] = a[n];

    dp[2] = dp[3] = a[2];

    for (int i = 4; i <= (n - 1); i++)
    {
        dp[i] = min(dp[i - 1] + a[i], dp[i - 2] + a[i - 1]);
    }

    ans1 = min(ans1, dp[n - 1] + a[n]);

    cout << ans1 << endl;
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