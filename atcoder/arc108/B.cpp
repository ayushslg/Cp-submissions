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
    string s;
    cin >> s;
    stack<char>c;
    char f, o, x;
    for (auto &i : s)
    {
        c.push(i);
        while (c.size() >= 3)
        {
            x = c.top();
            c.pop();
            o = c.top();
            c.pop();
            f = c.top();
            c.pop();
            if (f == 'f' and o == 'o' and x == 'x')
            {
                continue;
            }
            c.push(f);
            c.push(o);
            c.push(x);
            break;
        }
    }
    cout << c.size() << endl;

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