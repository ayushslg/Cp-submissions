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
    int a, b, c;
    cin >> a >> b >> c;
    int curr = 2 * b - c;
    if (curr % a == 0 and curr >= a and curr != 0)
    {
        cout << "YES" << endl;
        return;
    }
    curr = a + (c - a) / 2;
    if (curr % b == 0 and (c - a) % 2 == 0 and curr >= b and curr != 0)
    {
        cout << "YES" << endl;
        return;
    }
    curr = a + 2 * (b - a);
    if (curr % c == 0 and curr >= c and curr != 0)
    {
        cout << "YES" << endl;
        return;
    }
    cout << "NO\n";

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