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

const int N = 1005;

vector<ll>dp(N, N);

inline void solve()
{
    ll n, k;
    cin >> n >> k;
    vll b(n), c(n);
    input(b, n);
    input(c, n);
    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += dp[b[i]];
    }
    k = min(k, sum );
    vector<ll>ans(k + 1, 0);
    for (int i = 0; i < n; i++)
    {
        for (int j = k - dp[b[i]]; j >= 0; j--)
        {
            ans[j + dp[b[i]]] = max(ans[j + dp[b[i]]], ans[j] + c[i]);
        }
    }
    ll maxi = 0;
    for (int i = 0; i <= k; i++)
        maxi = max(maxi, ans[i]);
    cout << maxi << endl;



}
int main()
{
    Imposter

    dp[1] = 0;
    for (int i = 1; i < N; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            int p = i + i / j;
            if (p < N)
                dp[p] = min(dp[p], dp[i] + 1);
        }
    }

    int t = 1;
    cin >> t;

    while (t--)
    {
        solve();

    }
    return 0;
}