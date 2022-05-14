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
    ll n, w;
    set<ll>s;
    cin >> n >> w;
    vll a(n);
    input(a, n);
    for (int i = 0; i < n; i++)
        if (a[i] <= w)
            s.insert(a[i]);
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {

            if ((a[i] + a[j] ) <= w)
                s.insert(a[i] + a[j] );

        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                if ((a[i] + a[j] + a[k]) <= w)
                    s.insert(a[i] + a[j] + a[k]);
            }
        }
    }
    cout << s.size();

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