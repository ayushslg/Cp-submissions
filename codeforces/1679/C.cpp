#include<bits/stdc++.h>
#define Imposter ios_base::sync_with_stdio(false);cin.tie(NULL);
#define pb push_back
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <functional>
#include <iostream>
#define ll long long int
using namespace __gnu_pbds;
using namespace std;
typedef tree<int, null_type, less<int>, rb_tree_tag,
        tree_order_statistics_node_update>
        ordered_set;
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
    int n, q;
    cin >> n >> q;
    vector<int>row(n + 1, 0);
    vector<int>col(n + 1, 0);
    ordered_set ro, co;
    while (q--)
    {
        int t;
        cin >> t;
        if (t == 1)
        {
            int r, c;
            cin >> r >> c;
            row[r]++;
            col[c]++;
            ro.insert(r);
            co.insert(c);
        }
        else if (t == 2)
        {
            int r, c;
            cin >> r >> c;
            row[r]--;
            col[c]--;
            if (row[r] == 0)
                ro.erase(r);
            if (col[c] == 0)
                co.erase(c);

        }
        else
        {
            int x1, x2, y1, y2;
            cin >> x1 >> y1 >> x2 >> y2;
            bool flag = false;
            if (ro.order_of_key(x2 + 1) - ro.order_of_key(x1) == (x2 - x1 + 1))
            {
                flag = true;
            }
            if (co.order_of_key(y2 + 1) - co.order_of_key(y1) == (y2 - y1 + 1))
            {
                flag = true;
            }
            if (flag)
                cout << "Yes\n";
            else
                cout << "No\n";
        }

    }


}
int main()
{
    Imposter

    int t = 1;
    //cin >> t;
    while (t--)
    {
        solve();

    }
    return 0;
}