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
    vll a(n);
    input(a, n);
    vll b(n);
    input(b, n);
    vll ans(n, 0);
    ll mini = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        mini = min(mini, b[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (mini == b[i])
        {
            ans[i] = b[i];
            for (int j = i + 1; j < n; j++)
            {
                ans[j] = min(b[j], ans[j - 1] + a[j - 1]);
                //cout << b[j] << " " << ans[j] << endl;
            }
            ans[0] = min(b[0], ans[n - 1] + a[n - 1]);
            for (int j = 1; j < i; j++)
                ans[j] = min(b[j], ans[j - 1] + a[j - 1]);
            break;
        }
    }
    for (int i = 0; i < n; i++)
        cout << ans[i] << endl;
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