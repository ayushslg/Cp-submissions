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
    ll x, k;
    cin >> x >> k;
    ll q = k % 4;
    if (k == 0)
    {
        cout << x << endl;
        return;
    }
    if (x % 2 == 0)
    {
        k = k - q + 1;
        for (int i = 1; i <= q; i++)
        {
            if (i == 1)
                x -= k;
            if (i == 2)
                x += k;
            if (i == 3)
                x += k;
            k++;
        }
        cout << x << endl;
    }
    else
    {
        if (k == 1)
        {
            ++x;
            cout << x << endl;
            return;
        }
        while (k % 4)
            k--;
        k++;
        for (int i = 1; i <= q; i++)
        {
            if (i == 1)
                x += k;
            if (i == 2)
                x -= k;
            if (i == 3)
                x -= k;
            k++;
        }
        cout << x << endl;
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