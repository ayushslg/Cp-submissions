#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define vll vector<ll>
#define vlll vector<vll>
#define pb push_back
#define Imposter ios_base::sync_with_stdio(false);cin.tie(NULL);
#define f(i,n) for(ll i=0;i<(ll)n;i++)
#define all(x) x.begin(),x.end()

int main()
{
       Imposter
    
    ll tt;
    cin>>tt;
    while(tt--)
    {
      ll x,y,a,b;
      cin>>x>>y;
      cin>>a>>b;
      if(x==0 && y==0)
      cout<<0<<endl;
      else
      {
          ll ans=0;
        if(2*a>b)
        {
            ans+=b*(min(x,y));
            ans+=a*(abs(x-y));
        }
        else
        {
            ans+=a*(x+y);
        }
        cout<<ans<<endl;
      }
    }
    return 0;
}