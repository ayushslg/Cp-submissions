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
       
    
  ll n,i=1,c=0;
  cin>>n;
  ll p=2*n;deque<ll> add;
  while(p--)
  {
      string s;
      cin>>s;
      if(s[0]=='a')
      {
          ll x;
          cin>>x;
          add.pb(x);
      }
      else
      {
          if(!add.empty())
          {
          
          if(add.back()==i)
          add.pop_back();
          else
          {
              while(add.size()!=0) add.pop_back();
              c++;
              
          }
         
          }
           i++;
      }
      
      
  }
  cout<<c<<endl;
    return 0;
}