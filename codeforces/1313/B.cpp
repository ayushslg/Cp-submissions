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
    ll t;
    cin>>t;
    while(t--)
    {
      ll n,x,y;
      cin>>n>>x>>y;
      ll c=1;
      ll p=max(c,min(n,x+y-n+1));
      ll pi=min(n,x+y-1);
      cout<<p<<" "<<pi<<endl;
    }
}