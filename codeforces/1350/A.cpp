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
 
ll divisor(ll n)
{
    if(n%2==0)
    return 2;
    for(ll i=3;i<=sqrt(n);i+=2)
    {
        if(n%i==0)
        return i;
    }
    return n;
}
int main()
{
      
      
       Imposter
       
    
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;ll p=n;
        if(n%2==0)
        {
            p=n+k*2;
        }
        else
        {
        p=divisor(n);
        p=p+n;
        p=p+(k-1)*2;
        }
        cout<<p<<endl;
        
         
        
    }
    return 0;
}