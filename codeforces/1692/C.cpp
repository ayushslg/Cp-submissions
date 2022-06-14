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
    int n = 8;
    vector<string>vb(n);
    input(vb, n);
    int f = 0, fir, sec;
    for (int i = 1; i < n - 1; i++)
    {
        for (int j = 1; j < n - 1; j++)
        {
            if (vb[i][j] == '#')
            {
                int a = i, b = j, f = 0;
                while (a >= 0 && b >= 0)
                {
                    if (vb[a][b] == '#')
                    {
                        a--, b--;
                    }
                    else
                    {
                        f = 1;
                        break;
                    }
                }
                a = i, b = j;
                while (a < n && b >= 0)
                {
                    if (vb[a][b] == '#')
                    {
                        a++, b--;
                    }
                    else
                    {
                        f = 1;
                        break;
                    }
                }
                a = i, b = j;
                while (a < n && b < n)
                {
                    if (vb[a][b] == '#')
                    {
                        a++, b++;
                    }
                    else
                    {
                        f = 1;
                        break;
                    }
                }
                a = i, b = j;
                while (a >= 0 && b < n)
                {
                    if (vb[a][b] == '#')
                    {
                        a--, b++;
                    }
                    else
                    {
                        f = 1;
                        break;
                    }
                }
                if (!f)
                {
                    cout << i + 1 << " " << j + 1 << endl;
                    return;
                }

            }
        }

    }


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