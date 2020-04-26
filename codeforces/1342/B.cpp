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
      string t;
      cin>>t;ll c=0,d=0;
      for(ll i=0;i<t.length();i++)
      {
          if(t[i]=='0')
          c++;
          else
          d++;
      }
      if(c==0||d==0)
      {
          cout<<t<<endl;
      }
      else 
      {
          ll p=c+d;
          while(p--)
          cout<<1<<0;
          cout<<endl;
      }
      
    }
    return 0;
}