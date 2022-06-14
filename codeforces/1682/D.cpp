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
    vector<int> ones;
    for (int i = 0; i < n; i++) {
        if (s[i] == '1') {
            ones.push_back(i);
        }
    }

    for (int i = 0; i < int(ones.size()); i++) {
        for (int j = ones[i]; (j + 1) % n != ones[(i + 1) % ones.size()]; j++) {
            cout << j % n + 1 << " " << (j + 1) % n + 1 << "\n";
        }
    }

    for (int i = 1; i < int(ones.size()); i++) {
        cout << (ones[0] + n - 1) % n + 1 << " " << ones[i] << "\n";
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