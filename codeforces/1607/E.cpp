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
    string s;
    ll n, m;
    cin >> n >> m >> s;
    ll x = 0, y = 0, xmin = 0, xmax = 0, ymin = 0, ymax = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'L')
            y--;
        else if (s[i] == 'R')
            y++;
        else if (s[i] == 'U')
            x--;
        else
            x++;
        xmin = min(xmin, x);
        xmax = max(xmax, x);
        ymin = min(ymin, y);
        ymax = max(ymax, y);
        if (xmax - xmin >= n or ymax - ymin >= m) {
            if (s[i] == 'L')
                ymin++;
            if (s[i] == 'U')
                xmin++;
            break;
        }
    }
    cout << 1 - xmin << " " << 1 - ymin << "\n";
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