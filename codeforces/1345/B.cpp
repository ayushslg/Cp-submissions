#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define vll vector<ll>
#define vlll vector<vll>
#define pb push_back
#define pf push_front
#define Imposter ios_base::sync_with_stdio(false);cin.tie(NULL);
#define f(n) for(ll i=0;i<n;i++)
#define all(x) x.begin(),x.end()

ll answ(ll n,ll ans)
{
    ll temp;
 
    ll x=1;ll t=0;
           while(n>=t)
           {
               temp=t;
               t=x*2 + ((x-1)*(x)/2)*3;
               x++;
               if(t==n)
               temp=t;
           }
           ans++;
           if((n-temp)>=2)
           {
               answ((n-temp),ans);
           }
           else
           cout<<ans<<endl;
           /*if(n-temp>=2)
           answ(n-temp);
           cout<<ans<<endl;*/
    
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
        if(n==1)
        cout<<0<<endl;
        else if(n==2)
        cout<<1<<endl;
        else
        {
            ll ans=0;
           answ(n,ans);
           
        }
        
        
    }
    return 0;
}