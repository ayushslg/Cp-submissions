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
 
 
int main()
{
      
      
       Imposter
       
       
    ll t;
    cin>>t;
    while(t--)
    {
        string ans;
        ll n0,n1,n2,f=0,fla=0;
        cin>>n0>>n1>>n2;
        if(n0>0)
        {
            f=1;
            for(ll i=0;i<=n0;i++)
            ans+="0";
        }
        if(n2>0)
        {
            fla=1;
            for(ll i=0;i<=n2;i++)
            ans+="1";
        }
        if(n1>0)
        {
            if(f==1 && fla==1)
            {
                n1--;
                if(n1>0)
                {
                    if(n1%2==0)
                {
                    for(ll i=0;i<n1/2;i++)
                    ans+="01";
                }
                else
                {
                    for(ll i=0;i<(n1-1)/2;i++)
                    ans+="01";
                    ans+="0";
                }
                    
                }
                
            }
            else if(f==1)
            {
                if(n1%2==0)
                {
                    for(ll i=0;i<n1/2;i++)
                    ans+="10";
                }
                else
                {
                    for(ll i=0;i<(n1-1)/2;i++)
                    ans+="10";
                    ans+="1";
                }
                
            }
            else if(fla==1)
            {
                if(n1%2==0)
                {
                    for(ll i=0;i<n1/2;i++)
                    ans+="01";
                }
                else
                {
                    for(ll i=0;i<(n1-1)/2;i++)
                    ans+="01";
                    ans+="0";
                }
            }
            else
            {
                if(n1 %2==0)
                {
                    ans+="1";
                    for(ll i=0;i<n1/2;i++)
                    ans+="01";
                }
                else
                {
                    for(ll i=0;i<(n1+1)/2;i++)
                    ans+="01";
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}