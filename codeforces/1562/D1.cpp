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
//basically l to r ke biich even number of elements rakhna hai
inline void solve()
{
    int n, m;
    cin >> n >> m;
    string s;
    cin >> s;
    vector<int>sum(n + 1, 0);
    for (int i = 1; i <= s.length(); i++)
    {
        if (i & 1)
        {
            sum[i] = sum[i - 1] + (s[i - 1] == '+' ? -1 : 1);
        }
        else
        {
            sum[i] = sum[i - 1] + (s[i - 1] == '+' ? 1 : -1);
        }
    }
    for (int i = 0; i < m; i++)
    {
        int l, r, q;
        cin >> l >> r;
        q = sum[r] - sum[l - 1];
        if (q == 0)
        {
            cout << 0 << endl;
        }
        else if ((r - l + 1) & 1)
        {
            cout << 1 << endl;
        }
        else
        {
            cout << 2 << endl;
        }

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