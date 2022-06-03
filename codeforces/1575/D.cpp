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
    cin >> s;
    ll n = s.size();
    ll low = (ll)pow(10, (n - 1));
    ll high = (ll)pow(10, n) - 1;
    if (low == 1) low--;
    while (low % 25) low++;
    int ans = 0;
    for (; low < high; low += 25)
    {
        string curr = to_string(low);
        char ch = '#';
        int can = 1;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '_') continue;
            if (s[i] == 'X')
            {
                if (ch != '#' && ch != curr[i])
                {
                    can = 0;
                    break;
                }
                ch = curr[i];
            }
            else if (curr[i] != s[i])
            {
                can = 0;
                break;
            }
        }
        ans += can;
    }
    cout << ans << endl;
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