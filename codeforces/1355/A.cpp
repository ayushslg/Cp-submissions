#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define vll vector<ll>
#define vlll vector<vll>
#define pb push_back
#define pf push_front
#define Imposter ios_base::sync_with_stdio(false);cin.tie(NULL);
#define endl "\n"
#define oset tree<int, null_type,less<pair<int,int>>,rb_tree_tag,tree_order_statistics_node_update>
#define f(n) for(ll i=0;i<n;i++)
#define all(x) x.begin(),x.end()
 
ll maxi(ll a)
{
    ll temp=a,max=0,min=10;
    while(a>0)
    {
        ll t=a%10;
        if(t>max)
        max=t;
        if(t<min)
        min=t;
        a/=10;
    }
    
}
int main()
{
    
    Imposter
    
    
    ll tt;
    cin>>tt;
    while(tt--)
    {
        ll a,k;
        cin>>a>>k;
        while(k-->1)
        {
            ll temp=a,max=0,min=10;
    while(a>0)
    {
        ll t=a%10;
        if(t>max)
        max=t;
        if(t<min)
        min=t;
        a/=10;
    }
    if(min==0)
    {a=temp;break;}
    a=temp+(max*min);
    
        }
        cout<<a<<endl;
        
    }
    return 0;
}