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
vector<pair<int, pair<int, int>>>vb;
inline void solve()
{
    ll n;
    cin >> n;
    vll a(n);
    input(a, n);
    map<int, int>mp;
    for (int i = 0; i < n; i++)
        mp[a[i] % 10]++;
    string ans = "NO";
    for (int i = 0; i < vb.size(); i++)
    {
        if (mp[vb[i].first] > 0)
        {
            mp[vb[i].first]--;
            if (mp[vb[i].second.first] > 0)
            {
                mp[vb[i].second.first]--;
                if (mp[vb[i].second.second] > 0)
                {
                    mp[vb[i].second.second]--;
                    ans = "YES"; break;
                }
                mp[vb[i].second.first]++;
            }
            mp[vb[i].first]++;


        }
    }
    cout << ans << endl;

}
int main()
{
    Imposter

    int t = 1;
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            for (int k = 0; k < 10; k++)
            {
                if ((i + j + k) % 10 == 3)
                {
                    vb.pb({i, {j, k}});
                }
            }
        }
    }
    cin >> t;
    while (t--)
    {
        solve();

    }
    return 0;
}