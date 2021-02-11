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
#define f(n) for(ll i=0;i<n;i++)
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define input(arr,n) for(ll i1=0;i1<n;i1++ )cin>>arr[i1]
//#define endl "\n"
#define vll vector<ll>
#define vlll vector<vll>
#define all(x) x.begin(),x.end()
ll power(ll x, ll y, ll p) { 
    ll res = 1;    x = x % p;  
    while(y > 0) {
        if(y & 1) res = (res*x) % p; 
        y = y>>1;    x = (x*x) % p; 
    } return res; 
}
const int N=15e6 + 10;
inline void solve()
{
    string a,b;
    cin>>a>>b;
    int p=b.length();
    int ch[26]={0};
    int q=0;
    if(a.length()<b.length())
    {
        cout<<0<<endl;
        return;
    }
    int c[26]={0};
    for(int i=0;i<p;i++)
    {
        c[b[i]-'a']++;
    }
    for(int i=0;i<p;i++)
    {
        if(a[i]=='?')
        q++;
        else
        ch[a[i]-'a']++;
    }
    int temp=0,ans=0,f=0;
    for(int i=0;i<26;i++)
    {
        //cout<<ch[i]<<" "<<c[i]<<endl;
        if(ch[i]==c[i])
        continue;
        if(ch[i]>c[i])
        {
            f=1;
            break;
        }
        temp+=c[i]-ch[i];
    }
    if(!f and temp==q)
    ans++;
    for(int i=p;i<a.length();i++)
    {
        temp=0,f=0;
        if(a[i-p]=='?')
        q--;
        else
        ch[a[i-p]-'a']--;
        if(a[i]=='?')
        q++;
        else
        ch[a[i]-'a']++;
        for(int j=0;j<26;j++)
        {
            if(ch[j]==c[j])
        continue;
        if(ch[j]>c[j])
        {
            f=1;
            break;
        }
        temp+=c[j]-ch[j];
        }
        if(!f and temp==q)
        ans++;
    }
    cout<<ans<<endl;
    
    
    
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