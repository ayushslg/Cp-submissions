#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define vll vector<ll>
#define vlll vector<vll>
#define pb push_back
#define Imposter ios_base::sync_with_stdio(false);cin.tie(NULL);
#define f(n) for(ll i=0;i<n;i++)
ll min(ll x, ll y)
{
    if(x>y)
    return y;
    else
    return x;
}
int main()
{
	 Imposter
	 
	 ll n,m;
	 cin>>n>>m;
	 ll a[n],b[n];
	 f(n) cin>>a[i];
	 f(n) cin>>b[i];ll i=0,t[n],ans=1000000009,flag, x;
	 sort(b,b+n);
	 while(i<n)
	 {
	     flag=0;
	     x=(b[0]-a[i]+m)%m;
	     i++;
	     for(ll j=0;j<n;j++)
	     {
	         t[j]=(a[j]+x)%m;
	     }
	     sort(t,t+n);
	     for(ll j=0;j<n;j++)
	     {
	         if(b[j]!=t[j])
	         {
	             flag=1;
	             break;
	         }
	     }
	     if(flag==0)
	     ans=min(ans,x);
	     
	     
	 }
	 cout<<ans<<endl;
	 return 0;
	 
}
 	  	   