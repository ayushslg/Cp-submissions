#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define vll vector<ll>
#define vlll vector<vll>
#define pb push_back
#define Imposter ios_base::sync_with_stdio(false);cin.tie(NULL);
#define f(n) for(ll i=0;i<n;i++)
int main()
{
	 Imposter
	 
	 ll t;
	 cin>>t;
	 while(t--)
	 {
	     ll n;
	     cin>>n;
	     ll a[n];
	     f(n) cin>>a[i];ll x=-1,y=n;
	     for(ll i=0;i<n;++i)
	     {
	         if(a[i]<i) break;
	         x=i;
	     }
	     for(ll i=n-1;i>=0;--i)
	     {
	         if(a[i]<n-i-1)break;
	         y=i;
	     }
	     if(y<=x)
	     cout<<"Yes"<<endl;
	     else
	     cout<<"No"<<endl;
	 }
	 return 0;
	 
	 
}
 	  	   