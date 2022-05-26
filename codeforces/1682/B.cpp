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
    vector<int>a(n);
    int q = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] != i)
            q++;
    }
    if (a[0] != 0)
    {
        cout << 0 << endl;
        return;
    }
    int ans = 0;
    for (int bit = 0; bit < 31; bit++)
    {
        int z = 0;
        for (int i = 0; i < n; i++)
        {
            if (i != a[i])
            {
                if ((1 << bit)&a[i])
                    z++;
            }
        }
        if (z == q)
            ans += (1 << bit);
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