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
ll find(vector<vector<ll>>&a, ll n, ll m, ll i, ll j)
{
    ll currx = i - 1, curry = j - 1, chk = 0;
    while (currx >= 0 and curry >= 0)
    {
        chk += a[currx--][curry--];
    }
    currx = i - 1, curry = j + 1;
    while (currx >= 0 and curry < m)
    {
        chk += a[currx--][curry++];
    }
    currx = i + 1, curry = j - 1;
    while (currx<n and curry >= 0)
    {
        chk += a[currx++][curry--];
    }
    currx = i + 1, curry = j + 1;
    while (currx < n and curry < m)
    {
        chk += a[currx++][curry++];
    }
    return chk;
}
ll bin_search(ll m, vector<ll>&a)
{
    ll low = 0, high = a.size() - 1, ans = 0;
    while (low <= high)
    {
        int mid = low + high;
        mid = mid / 2;
        if (a[mid] >= m)
        {
            ans = mid;
            high = mid - 1;
        }
        else
            low = mid + 1;
    }
    return (ans + 1);
}
inline void solve()
{
    ll n, k;
    cin >> n >> k;
    vll a(n);
    input(a, n);
    map<ll, ll>mp;
    for (int i = 0; i < n; i++)
        mp[a[i]]++;
    vector<ll>vb;
    for (auto it : mp)
        if (it.second >= k)
            vb.push_back(it.first);
    if (vb.size() == 0)
    {
        cout << -1 << endl;
        return;
    }
    //cout << vb.size() << endl;
    sort(all(vb));
    int ans = 1, l = vb[0], r = vb[0];
    vector<pair<ll, pair<ll, ll>>>chk;
    for (int i = 1; i < vb.size(); i++)
    {
        if (vb[i] == (vb[i - 1] + 1))
        {
            ans++;
            r = vb[i];
        }
        else
        {
            chk.push_back({ans, {l, r}});
            ans = 1;
            l = vb[i];
            r = vb[i];
        }
    }
    chk.push_back({ans, {l, r}});
    sort(all(chk));
    reverse(all(chk));
    cout << chk[0].second.first << " " << chk[0].second.second << endl;

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