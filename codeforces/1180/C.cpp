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
       
    
   ll n,q;
   cin>>n>>q;deque<ll>arey;ll max=0;
   ll a[n];
   f(n){
       cin>>a[i];
       arey.pb(a[i]);
       if(a[i]>max)
       max=a[i];
   }
   ll m=0;
   map<ll,pair<ll,ll>>ans;
  while(1)
  {
       ll first=arey.front();
       arey.pop_front();
       ll second=arey.front();
       arey.pop_front();
       if(first==max)
       {
           arey.pf(second);
           arey.pf(first);
           break;
       }
       m++;
       ans[m]={first,second};
       if(second>first)
       swap(first,second);
       arey.pf(first);
       arey.pb(second);
   }
   ll arr[n];
   f(n)
   {
       arr[i]=arey.front();
       arey.pop_front();
   }
   for(ll i=0;i<q;i++)
   {
       ll x;
       cin>>x;
       if(x<=m)
       cout<<ans[x].first<<" "<<ans[x].second<<endl;
       else
       cout<<max<<" "<<arr[(x - (m + 1)) % (n - 1) + 1]<<endl;
   }
   
   
    
    return 0;
}