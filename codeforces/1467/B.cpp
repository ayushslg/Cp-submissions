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
    int n;
    cin >> n;
    vector<int> a(n);
    input(a, n);
    vector<int> cool(n, 0);
    int ans = 0;
    function<int(int)> isHill = [&](int i)
    {
        if (a[i] > a[i - 1] and a[i] > a[i + 1] and i > 0 and i < n - 1)
            return 1;
        return 0;
    };
    function<int(int)> isValley = [&](int i)
    {
        if (a[i] < a[i - 1] and a[i] < a[i + 1] and i > 0 and i < n - 1)
            return 1;
        return 0;
    };
    for (int i = 1; i < n - 1; i++)
    {
        if (isHill(i) or isValley(i))
            cool[i] = 1, ans++;
    }
    int chk = ans;
    for (int i = 1; i < n - 1; i++)
    {
        int temp = a[i];
        a[i] = a[i - 1];
        ans = min(ans, chk - cool[i - 1] - cool[i] - cool[i + 1] + isHill(i + 1) + isValley(i + 1));
        a[i] = a[i + 1];
        ans = min(ans, chk - cool[i - 1] - cool[i] - cool[i + 1] + isHill(i - 1) + isValley(i - 1));
        a[i] = temp;
    }
    cout << ans << endl;

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