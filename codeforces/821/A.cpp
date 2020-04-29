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
       
    
   ll n;
   cin>>n;
   vll a[n],b[n];ll d=0,c=0;
   for(ll i=0;i<n;i++)
   {
       for(ll j=0;j<n;j++)
       {
           ll t;
           cin>>t;
           if(t!=1)
           d++;
           a[i].pb(t);
           b[i].pb(t);
       }
   }
   bool ok=true;
   for(ll i=0;i<n;i++)
   {
       for(ll j=0;j<n;j++)
       {
           if(a[i][j]==1)
           continue;
           else
           {
               for(ll t=0;t<n;t++)
               {
                   bool ok=false;
                   for(ll q=0;q<n;q++)
                   {
                   if(t==i && q==j)
                   continue;
                   else
                   {
                       ll sum=a[t][j]+a[i][q];
                       if(sum==a[i][j])
                       {
                           c++;ok=true;
                           break;
                       }
                   }
                   }
                   if(ok)
                   break;
                   
               }
           }
       }
   }
   
   if(d!=c)
   cout<<"No"<<endl;
   else
   cout<<"Yes"<<endl;
    return 0;
}