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
const int N = 2750132;
inline void solve()
{
    ll n;
    cin >> n;
    vector<bool>prime(N, true);

    unordered_map<ll, ll>mp;
    int sec = 1; vector<ll>get(N, 0);
    for (ll i = 2; i < N; i++)
    {
        if (prime[i])
        {
            mp[i] = sec++;
            for (ll j = i * i; j < N; j += i)
            {
                get[j] = max(get[j], (j / i));
                prime[j] = false;
            }
        }
    }
    multiset<ll, greater<ll>>mt;
    for (int i = 0; i < 2 * n; i++)
    {
        int s;
        cin >> s;
        mt.insert(s);
    }
    vll a;
    ll j = 0;
    while (!mt.empty())
    {
        if (prime[*mt.begin()])
        {
            a.pb(mp[*mt.begin()]);
            mt.erase(mt.find(a[j]));
        }
        else
        {
            a.pb(*mt.begin());
            mt.erase(mt.find(get[*mt.begin()]));
        }
        mt.erase(mt.begin());
        j++;
    }
    for (auto it : a)
        cout << it << " ";


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