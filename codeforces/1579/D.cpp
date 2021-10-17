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
    vector<pair<int, int>>ans;
    priority_queue<pair<int, int>>pq;
    for (int i = 0; i < n; i++)
        pq.push({a[i], i + 1});
    while (pq.size() > 1)
    {
        pair<int, int> fir = pq.top();
        pq.pop();
        pair<int, int>sec = pq.top();
        pq.pop();
        if (fir.first > 0 and sec.first > 0)
        {
            ans.push_back({fir.second, sec.second});
            fir.first--;
            sec.first--;
            pq.push(fir);
            pq.push(sec);
        }
    }
    cout << ans.size() << endl;
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i].first << " " << ans[i].second << endl;
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