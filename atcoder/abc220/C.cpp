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
    ll x;
    cin >> x;
    ll sum = 0;
    sum = accumulate(all(a), sum);
    ll q = (x + 1) / sum;
    if ((x + 1) % sum == 0)
    {
        cout << q*n << endl;
    }
    else
    {
        ll z = q * sum;
        ll ans = q * n;
        while (z <= x)
        {
            for (int i = 0; i < n; i++)
            {
                z += a[i];
                ans++;
                if (z > x)
                {
                    cout << ans << endl;
                    return;
                }
            }
        }
    }

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