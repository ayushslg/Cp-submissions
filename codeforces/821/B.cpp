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


int main()
{
      
      
       Imposter
       
    
   ll m,b;
   cin>>m>>b;
   ll y=b,ans=0;
   for(ll i=y;i>=0;i--)
   {
       ll x=m*(b-i);
       ll sum=0;
       sum+=(x+1)*(i*(i+1))/2 + (i+1)*(x*(x+1))/2;
       ans=max(ans,sum);
   }
   cout<<ans<<endl;
    
    return 0;
}