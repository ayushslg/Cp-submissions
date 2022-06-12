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
ll find(vector<ll>& red, vector<ll>& green, vector<ll>& blue, ll r, ll g, ll b, vector<vector<vector<ll>>> &dp)
{
    vector<int>sz(3);
    sz.pb(r); sz.pb(b); sz.pb(g);
    sort(all(sz));
    if (sz[1] == -1)
        return 0;
    if (sz[0] == -1)
    {
        if (r >= 0 && g >= 0)
        {
            return red[r] * green[g] + find(red, green, blue, r - 1, g - 1, b, dp);
        }
        if (r >= 0 && b >= 0)
        {
            return red[r] * blue[b] + find(red, green, blue, r - 1, g, b - 1, dp);
        }
        if (g >= 0 && b >= 0)
        {
            return green[g] * blue[b] + find(red, green, blue, r, g - 1, b - 1, dp);
        }
    }
    if (dp[r][g][b] != -1)
        return dp[r][g][b];
    ll rg = 0, rb = 0, gb = 0;

    rg = red[r] * green[g] + find(red, green, blue, r - 1, g - 1, b, dp);
    rb = red[r] * blue[b] + find(red, green, blue, r - 1, g, b - 1, dp);
    gb = green[g] * blue[b] + find(red, green, blue, r, g - 1, b - 1, dp);

    return dp[r][g][b] = max(rg, max(rb, gb));

}
inline void solve()
{
    ll r, g, b;
    cin >> r >> g >> b;
    vll red(r), green(g), blue(b);
    input(red, r);
    input(green, g);
    input(blue, b);
    sort(red.begin(), red.end());
    sort(green.begin(), green.end());
    sort(blue.begin(), blue.end());
    vector<vector<vector<ll>>> dp(r, vector<vector<ll>>(g, vector<ll>(b, -1)));
    cout << find(red, green, blue, r - 1, g - 1, b - 1, dp) << endl;
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