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
    string s;
    cin >> s;
    int cnt = 0;
    f(n)
    if (s[i] == '1') cnt++;
    if ((cnt == 0) || (cnt & 1))
    {
        cout << "NO\n";
        return;
    }
    cout << "YES\n";
    for (int q = 1; q < n; q++)
    {
        if (s[q - 1] == '1')
        {
            int i = (q + 1) % n;
            while (i != q)
            {
                int j = i;
                int prev = q;
                while (j != q)
                {
                    cout << prev + 1 << " " << j + 1 << endl;
                    prev = j;
                    j = (j + 1) % n;
                    if (s[prev] == '1')break;
                }
                i = j;
            }
            return;
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