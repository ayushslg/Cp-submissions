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
    ll n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    int one = 0, fir = -1, last = n;
    for (int i = 0; i < s.length(); i++)
    {
        one += s[i] - '0';
        if (fir == -1 && s[i] == '1')
            fir = i;
        if (s[i] == '1')
            last = i;
    }
    int ans = 0;
    if (one > 0 && k >= (n - 1 - last))
    {
        k -= (n - 1 - last);
        one--;
        ans += 1;
    }
    if (one > 0 && k >= fir)
    {
        one--;
        ans += 10;
    }
    cout << one * 11 + ans << endl;
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