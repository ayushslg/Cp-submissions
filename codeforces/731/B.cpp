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
       
    
    ll n,flag=1;
    cin>>n;
    ll a[n];
    for(ll i=0;i<n;i++) cin>>a[i];
    for(ll i=0;i<n-1;i++)
    {
        if(a[i]%2==0)
        continue;
        else
        {
            if(a[i+1]>=1)
            a[i+1]-=1;
            else flag=0;
        }
    }
    if(a[n-1]%2==0 && flag)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
    
    return 0;
}