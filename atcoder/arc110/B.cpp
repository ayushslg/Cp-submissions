#include<bits/stdc++.h>
#define Imposter ios_base::sync_with_stdio(false);cin.tie(NULL);
#define pb push_back
#define ll long long int
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#pragma GCC optimize("O3")
using namespace __gnu_pbds;
#define ordered_set tree<ll, null_type,less_equal<ll>, rb_tree_tag,tree_order_statistics_node_update>//s.order_of_key(val) *s.find_by_order(ind)
using namespace std;
/*#pragma region atcoder
#include <atcoder/all>
using namespace atcoder;
using mint = modint1000000007;*/
#define f(n) for(ll i=0;i<n;i++)
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define input(arr,n) for(ll i1=0;i1<n;i1++ )cin>>arr[i1]
#define endl "\n"
#define vll vector<ll>
#define vlll vector<vll>
#define all(x) x.begin(),x.end()
#define MOD 1000000007
ll power(ll x, ll y, ll p) { 
    ll res = 1;    x = x % p;  
    while(y > 0) {
        if(y & 1) res = (res*x) % p; 
        y = y>>1;    x = (x*x) % p; 
    } return res; 
}
inline void solve()
{
    ll n;
    cin>>n;
    string t;
    cin>>t;
    string s="";
    if(n==1)
    {
        if(t[0]=='1')
        {
            ll ans=1e10;
            ans*=2;
            cout<<ans<<endl;
        }
        else
        {
            ll ans=1e10;
            cout<<ans<<endl;
        }
        return;
    }
    if(t[0]=='0')
    {
        s+="11";
        s+=t;
    }
    if(t[0]=='1')
    {
        if(t[1]=='1')
        {
            s+=t;
        }
        else
        {
            s+='1';
            s+=t;
        }
    }
    ll p=s.length()-1;
    if(s[p]=='1')
    {
        if(s[p-1]=='1')
        s+='0';
        else
        s+="10";
    }
    s+="110";
    ll ans=1e10;
    ll l=0;
    for(int i=0;i<s.length()-2;i+=3)
    {
        if(s[i]=='1' and s[i+1]=='1' and s[i+2]=='0')
        {
            //cout<<i<<endl;
            l++;
        }
    }
    if(l!=s.length()/3)
    {
        cout<<0<<endl;
        return;
    }
    ll occ=1;
    for(int i=s.length()-1;i>=s.length()-3;i--)
    {
        ll p=i,f=0;
        for(int j=t.length()-1;j>=0;j--)
        {
            if(s[p]!=t[j])
            {
                f=1;
                break;
            }
            p--;
            
        }
        if(!f)
        occ++;
    }
    //cout<<s<<" "<<l<<endl;
    cout<<ans-l+occ<<endl;
    
    
    
}
int main()
{
    Imposter
    
    int t=1;
    //cin>>t;
    while(t--)
    {
        solve();
        
    }
    return 0;
}