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
    int n, m;
    cin >> n >> m;
    vector<int>vb[n + 1];
    vector<int>in(n + 1, 0);
    for (int i = 0; i < m; i++)
    {
        int k;
        cin >> k;
        int sec;
        cin >> sec;
        for (int i = 1; i < k; i++)
        {
            int v;
            cin >> v;
            vb[sec].pb(v);
            in[v]++;
            sec = v;
        }
    }
    queue<int>q;
    for (int i = 1; i <= n; i++)
    {
        if (in[i] == 0)
            q.push(i);
    }
    while (!q.empty())
    {
        int i = q.front();
        q.pop();
        for (int it : vb[i])
        {
            in[it]--;
            if (!in[it])
                q.push(it);
        }
    }
    for (int i = 1; i <= n; i++)
    {
        if (in[i] > 0)
        {
            cout << "No";
            return;
        }
    }
    cout << "Yes";
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