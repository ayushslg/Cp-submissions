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
    ll n;
    cin >> n;
    vll a(n);
    input(a, n);
    map<ll, vector<pair<ll, ll>> >mp;
    int curr, st, en;
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            st = 0, en = 0; curr = a[0];
            continue;
        }
        if (a[i] == curr)
        {
            en++;
        }
        else
        {
            mp[curr].pb({st, en});
            curr = a[i];
            st = i;
            en = i;
        }
    }
    //cout << curr << " " << st << " " << en << endl;
    mp[curr].pb({st, en});
    int ans = 0, num, l , r;
    for (auto it : mp)
    {
        vector<pair<ll, ll>> vb = it.second;
        int ini_len = vb[0].second - vb[0].first + 1; st = vb[0].first, en = vb[0].second;
        //cout << st << " " << en << endl;
        if (ini_len > ans)
        {
            ans = ini_len;
            num = it.first;
            l = st;
            r = en;
        }
        for (int i = 1; i < vb.size(); i++)
        {
            //cout << vb[i].first << " " << vb[i].second << endl;
            if (ini_len > ans)
            {
                ans = ini_len;
                num = it.first;
                l = st;
                r = en;
            }
            if (vb[i].first - vb[i - 1].second - 1 > ini_len)
            {
                st = vb[i].first, en = vb[i].second;
                ini_len = vb[i].second - vb[i].first + 1;
                if (ini_len > ans)
                {

                    ans = ini_len;
                    num = it.first;
                    l = st;
                    r = en;
                }
            }
            else
            {
                ini_len = vb[i].second - vb[i].first + 1 - (vb[i].first - vb[i - 1].second - 1) + ini_len;
                en = vb[i].second;
                if (ini_len > ans)
                {
                    ans = ini_len;
                    num = it.first;
                    l = st;
                    r = en;
                }

            }

        }
    }
    cout << num << " " << l + 1 << " " << r + 1 << endl;
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