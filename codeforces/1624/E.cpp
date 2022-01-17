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
    string s;
    map<string, int>exist;
    vector<int>pos(m + 1, -1);
    map<string, pair<int, pair<int, int>>>gotcha;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        for (int j = 0; j < m; j++)
        {
            string str = "";
            str += s[j];
            for (int k = 1; k <= 2; k++)
            {
                if ((j + k) >= m)
                    break;
                str += s[k + j];
                if (!exist[str])
                {
                    exist[str] = 1;
                    gotcha[str] = {i, {j, j + k}};
                }
            }
        }
    }
    cin >> s;
    vector<int>dp(m + 1, 0);
    dp[0] = 1;
    for (int i = 0; i < m; i++)
    {
        string str = "";
        str += s[i];
        for (int k = 1; k <= 2; k++)
        {
            if ((i - k) < 0)
                break;
            str = s[i - k] + str;
            if (exist[str] and dp[i - k])
            {
                pos[i + 1] = i - k;
                dp[i + 1] = 1;
            }
            if (dp[i + 1])
                break;
        }
    }
    if (!dp[m])
    {
        cout << "-1\n";
        return;
    }
    vector<pair<int, pair<int, int>>>vb;
    for (int i = m; i > 0;)
    {
        int q = pos[i];
        string str = s.substr(q, i - q);
        vb.push_back(gotcha[str]);
        i = q;
    }
    cout << vb.size() << endl;
    reverse(all(vb));
    for (auto it : vb)
    {
        cout << it.second.first + 1 << " " << it.second.second + 1 << " " << it.first + 1 << endl;
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