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
//9999
inline void solve()
{
    ll n, m;
    cin >> n >> m;
    if (n == 1)
    {
        cout << 0 << endl;
        return;
    }
    if (n == 2)
    {
        cout << 1 << endl << "1 2\n";
        return;
    }
    vector<int>used(1001, 0);
    int a, b;
    for (int i = 0; i < m; i++)
    {
        cin >> a >> b;
        used[a] = 1;
        used[b] = 1;
    }
    for (int i = 1; i <= n; i++)
    {
        if (!used[i])
        {
            cout << n - 1 << endl;
            for (int j = 1; j <= n; j++)
            {
                if (j == i)
                    continue;
                cout << j << " " << i << endl;
            }
            return;
        }
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