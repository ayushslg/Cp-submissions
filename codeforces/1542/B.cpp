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
// a^x + y*b
inline void solve()
{
    ll n, a, b;
    cin >> n >> a >> b;
    if (a == 1)
    {
        if ((n - 1) % b == 0)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
        return;
    }
    else
    {
        for (ll x = 1; x <= n; x = x * a)
        {
            if ((n - x) % b == 0)
            {
                cout << "Yes" << endl;
                return;
            }
        }
        cout << "No\n";
    }
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