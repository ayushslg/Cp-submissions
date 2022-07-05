#include<bits/stdc++.h>
#define Imposter ios_base::sync_with_stdio(false);cin.tie(NULL);
#define pb push_back
#define ll long long int
using namespace std;
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
int f(int ind, int n, int c, vector<int>& stair, vector<int>& lift, int state, vector<vector<int>>& dp)
{
    if (ind == 0)
    {
        if (state)
            return c;
        return 0;
    }
    if (dp[ind][state] != INT_MAX)
        return dp[ind][state];
    int st = 1e8;
    if (state != 1)
        st = stair[ind - 1] + f(ind - 1, n, c, stair, lift, 0, dp);
    int lft = 1e8;
    lft = min(c + lift[ind - 1] + f(ind - 1, n, c, stair, lift, 0, dp), lift[ind - 1] + f(ind - 1, n, c, stair, lift, 1, dp));
    return dp[ind][state] = min(lft, st);

}
inline void solve()
{

    int n;
    cin >> n;
    int c;
    cin >> c;
    vector<int> stair(n - 1);
    vector<int> lift(n - 1);
    input(stair, n - 1);
    input(lift, n - 1);
    vector<vector<int>>dp(n, vector<int>(3, INT_MAX));
    int d = f(n - 1, n, c, stair, lift, 2, dp);
    cout << 0 << " ";
    for (int i = 1; i < n - 1; i++)
        cout << min(dp[i][0], dp[i][1]) << " ";
    cout << d;
}
int main()
{
    Imposter

    int t = 1;
    //cin >> t;
    while (t--)
    {
        solve();

    }
    return 0;
}