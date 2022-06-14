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
void after(int x, string& curr)
{
    while (x--)
    {
        if (curr[4] < '9')
            curr[4]++;
        else if (curr[4] == '9')
        {
            curr[4] = '0';
            if (curr[3] < '5')
            {
                curr[3]++;
            }
            else
            {
                curr[3] = '0';
                string c = "";
                c += curr[0];
                c += curr[1];
                if (c == "23")
                {
                    curr[0] = '0';
                    curr[1] = '0';
                }
                else
                {
                    if (curr[1] < '9')
                        curr[1]++;
                    else
                    {
                        curr[1] = '0';
                        curr[0]++;
                    }
                }
            }
        }
    }

}
bool isPalindrome(string s)
{
    string p = s;
    reverse(all(p));
    return p == s;
}
inline void solve()
{
    string s;
    int x, ans = 0;
    cin >> s >> x;
    string curr = s;
    if (isPalindrome(curr))
        ans++;
    after(x, curr);
    while (curr != s)
    {
        if (isPalindrome(curr))
            ans++;
        after(x, curr);
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