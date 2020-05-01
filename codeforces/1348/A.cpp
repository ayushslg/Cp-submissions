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
    ll t;
    cin>>t;
    while(t--)
    {
       ll n;
       cin>>n;
       if(n==2)
       cout<<2<<endl;
       else
       {
           ll c=1,sum=0;
           while(c<(n/2))
           {
               sum+=pow(2,c);
               c++;
           }
           sum+=pow(2,n);
           while(c<n)
           {
               sum-=pow(2,c);
               c++;
           }
           cout<<sum<<endl;
       }
    }
    return 0;
}