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
#define ld long double
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
    vector<int>a(n);
    input(a, n);
    set<int>st;
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j * j <= a[i]; j++)
        {
            if (a[i] % j == 0)
            {
                if (j != 1)
                    st.insert(j);
                if (a[i] != 1)
                    st.insert(a[i] / j);
            }
        }
    }
    vector<int>ans;
    for (int i = 1; i <= m; i++)
    {
        int f = 0;
        for (int j = 1; j * j <= i; j++)
        {
            if (i % j == 0)
            {
                if (st.find(i / j) != st.end() or st.find(j) != st.end())
                {
                    f = 1;
                    break;
                }
            }
        }
        if (!f)
            ans.push_back(i);
    }
    cout << ans.size() << endl;
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << endl;
    }

}
int main()
{
    Imposter

    int t = 1;
    //cin >> t;
    int i = 0;
    while (t--)
    {
        //cout << "Case #" << ++i << ": ";
        solve();

    }
    return 0;
}