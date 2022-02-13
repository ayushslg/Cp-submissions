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
    int end = 0, beg = 0;
    for (int i = s.length() - 1; i >= 0; i--)
    {
        if (s[i] == 'a')
            end++;
        else
            break;
    }
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'a')
            beg++;
        else
            break;
    }
    reverse(s.begin(), s.end());
    if (end > beg)
    {
        for (int i = beg; i < end; i++)
            s += 'a';
    }
    string q = s;
    reverse(q.begin(), q.end());
    if (q == s)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
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