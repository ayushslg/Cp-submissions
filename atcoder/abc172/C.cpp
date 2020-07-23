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
#define rep(i,a,b) for(i=a;i<b;i++)
#define input(arr,n) for(ll i1=0;i1<n;i1++ )cin>>arr[i1]
#define vll vector<ll>
#define vlll vector<vll>
#define all(x) x.begin(),x.end()
#define N 1000005 
ll power(ll x, ll y, ll p) { 
    ll res = 1;    x = x % p;  
    while(y > 0) {
        if(y & 1) res = (res*x) % p; 
        y = y>>1;    x = (x*x) % p; 
    } return res; 
}
ll a[2002],dp[2002][2002];
ll maxprofit(int begin,int end,int n)
{
    if(dp[begin][end]!=-1)
    return dp[begin][end];
    int year=n-(end-begin);
    if(begin==end)
    return year*a[begin];
    ll x=a[begin]*year + maxprofit(begin+1,end,n);
    ll y=a[end]*year + maxprofit(begin,end-1,n);
    ll ans=max(x,y);
    dp[begin][end]=ans;
    return ans;
    
}
ll maximum(int n)
{
    f(n)
    {
        for(int j=0;j<n;j++)
        dp[i][j]=-1;
    }
    ll ans=maxprofit(0,n-1,n);
    return ans;
}
int main()
{
    Imposter
    
    ll n,m,k;
    cin>>n>>m>>k;
    ll a[n+1],b[m+1];
    for(int i=1;i<=n;i++)
    {
        ll x;
        cin>>x;
        if(i==1)
        a[1]=x;
        else
        a[i]=x+a[i-1];
        //cout<<a[i]<<" ";
    }
    
    for(int i=1;i<=m;i++)
    {
        ll x;
        cin>>x;
        if(i==1)
        b[1]=x;
        else
        b[i]=x+b[i-1];
    }
    a[0]=b[0]=0;
    //find maximum (i+j)==k
    ll j=m,ans=0;
    for(int i=0;i<=n;i++)
    {
        if(a[i]>k)
        break;
        while(b[j]>k-a[i])
        {j--;}
        ans=max(ans,i+j);
        //cout<<ans<<" "<<a[i]<<" "<<j<<endl;
    }
    cout<<ans<<endl;
    
    return 0;
}