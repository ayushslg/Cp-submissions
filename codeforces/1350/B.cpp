#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define vll vector<ll>
#define vlll vector<vll>
#define pb push_back
#define pf push_front
#define Imposter ios_base::sync_with_stdio(false);cin.tie(NULL);
#define oset tree<int, null_type,less<pair<int,int>>,rb_tree_tag,tree_order_statistics_node_update>
#define f(n) for(ll i=0;i<n;i++)
#define all(x) x.begin(),x.end()
 
 ll gcd(ll a,ll b)
 {
     if(b==0) return a;
     return gcd(b,a%b);
 }
 ll findgcd(vll vec, ll n) 
{ 
    ll result = vec[0]; 
    for (ll i = 1; i < n; i++) 
    { 
        result = gcd(vec[i], result); 
  
        if(result == 1) 
        { 
           return 1; 
        } 
    } 
    return result; 
} 
  
 
int main()
{
      
      
       Imposter
       
    
    
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a[n];
        f(n) cin>>a[i];ll dp[n];
        f(n) dp[i]=1;
        for(ll i=n/2;i>=1;i--)
        {
            for(ll j=2*i;j<=n;j+=i)
            {
                if(a[j-1]>a[i-1])
                dp[i-1]=max(dp[i-1],dp[j-1]+1);
            }
        }
        ll ans=*max_element(dp,dp+n);
        cout<<ans<<endl;
        
    }
    return 0;
}