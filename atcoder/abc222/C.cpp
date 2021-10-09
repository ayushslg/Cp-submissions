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
// G C P
inline void solve()
{
    ll n, m;
    cin >> n >> m;
    string s[2 * n];
    input(s, 2 * n);
    vll a(2 * n, 0);
    vll list(2 * n, 0);
    f(2 * n)
    list[i] = i;
    for (int j = 0; j < m; j++)
    {
        for (int i = 0; i < n; i++)
        {
            int fir = list[2 * i];
            int sec = list[2 * i + 1];
            // 2i and 2i + 1
            if (s[fir][j] == 'G' )
            {
                if (s[sec][j] == 'P')
                {
                    a[sec]++;
                }
                else if (s[sec][j] == 'C')
                {
                    a[fir]++;
                }
            }
            else if (s[fir][j] == 'C')
            {
                if (s[sec][j] == 'G')
                {
                    a[sec]++;
                }
                if (s[sec][j] == 'P')
                {
                    a[fir]++;
                }
            }
            else
            {
                if (s[sec][j] == 'C')
                {
                    a[sec]++;
                }
                if (s[sec][j] == 'G')
                {
                    a[fir]++;
                }
            }

        }
        map<ll, ll>mp;
        for (int i = 0; i < 2 * n; i++)
        {
            int maxi = -1, ind;
            for (int k = 0; k < 2 * n; k++)
            {
                if (mp[k] != -1 and maxi < a[k])
                {
                    ind = k;
                    maxi = a[k];
                }
            }
            mp[ind] = -1;
            list[i] = ind;
        }

    }
    for (int i = 0; i < 2 * n; i++)
        cout << list[i] + 1 << endl;

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