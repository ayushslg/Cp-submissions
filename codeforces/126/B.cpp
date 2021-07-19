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
    vector<int>lps(s.length(), 0);
    int i = 1, len = 0, n = s.length();
    while (i < n)
    {
        if (s[i] == s[len])
        {
            ++len;
            lps[i] = len;
            ++i;
        }
        else
        {
            if (len != 0)
            {
                len = lps[len - 1];
            }
            else
            {
                lps[i] = 0;
                ++i;
            }
        }
    }
    if (!lps[n - 1])
    {
        cout << "Just a legend";
        return;
    }
    int q = n - 1;
    unordered_map<ll, ll>mp;
    for (int i = 0; i < n - 1; i++)
        mp[lps[i]]++;
    int p = 1;
    while (1)
    {
        p = lps[q];
        if (!p)
            break;
        if (mp[p])
        {
            for (int i = 0; i < p; i++)
                cout << s[i];
            return;
        }
        q = lps[q - 1];

    }
    cout << "Just a legend";

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