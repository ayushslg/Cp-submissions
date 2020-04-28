#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define vll vector<ll>
#define vlll vector<vll>
#define pb push_back
#define Imposter ios_base::sync_with_stdio(false);cin.tie(NULL);
#define f(n) for(ll i=0;i<n;i++)
#define all(x) x.begin(),x.end()


int main()
{
      
      
       Imposter
       
    
   ll n,c=0,d=0;
   cin>>n;
   ll a[n];vll vec;ll min=0,max=-1000007,f=0;
   f(n){
       cin>>a[i];
       if(a[i]>=0)
       {
           a[i]=-a[i]-1;
       }
   }
   if(n%2==0)
   {
       f(n)
       {
           cout<<a[i]<<" ";
       }
   }
   else
   {
       ll temp;
       f(n)
       {
           if(a[i]<min)
           {
               min=a[i];
               temp=i;
           }
       }
       a[temp]=-a[temp]-1;
       f(n) cout<<a[i]<<" ";
   }
    
    return 0;
}