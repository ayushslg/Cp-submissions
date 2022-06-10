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
    string ans = "YES";
    bool flag = false;
    vector<int>diff;
    priority_queue<int>pq;
    pq.push(0);
    for (int i = 0; i < n; i++)
    {
        int u;
        cin >> u;
        if (a[i] < u)
        {
            ans = "NO";
            flag = true;
        }
        else
        {
            if (u == 0)
                pq.push(a[i] - u);
            else
                diff.pb(a[i] - u);
        }

    }
    if (flag)
        cout << ans << endl;
    else
    {
        sort(all(diff));
        if (!diff.size())
        {
            cout << ans << endl;
        }
        else
        {
            if (diff[0] == diff[diff.size() - 1] && diff[0] >= pq.top())
            {
                cout << ans << endl;
            }
            else
            {
                cout << "NO" << endl;
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