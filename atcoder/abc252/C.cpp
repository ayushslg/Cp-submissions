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
    ll ans = INT_MAX;
    ll n;
    cin >> n;
    vector<string>vb(n);
    input(vb, n);
    for (char ch = '0'; ch <= '9'; ch++)
    {
        ll sec = 0;
        map<ll, ll>mp;
        for (int i = 0; i < n; i++)
        {
            for (ll j = 0; j < vb[i].length(); j++)
            {
                if (vb[i][j] == ch)
                {
                    if (mp.find(j) == mp.end())
                    {
                        sec = max(sec, j);
                        mp[j]++;
                    }
                    else
                    {
                        sec = max(sec, (10 * mp[j]) + j);
                        mp[j]++;
                    }
                    break;
                }
            }
        }
        ans = min(ans, sec);
    }
    cout << ans;
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