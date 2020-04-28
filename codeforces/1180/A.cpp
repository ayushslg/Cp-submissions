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
       
    
   ll n;
   cin>>n;
   ll p=n+(n*(n-1));
   ll p1=n-1 +((n-1)*(n-2));
   cout<<p+p1<<endl;
    
    return 0;
}