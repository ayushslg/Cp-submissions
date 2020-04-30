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
        ll max=0,min=1e18;
        ll n,k;
        cin>>n>>k;
        ll a[n];
        f(n) {
            cin>>a[i];
            if(a[i]>max)
            max=a[i];
            if(a[i]<min)
            min=a[i];
        }
        if(min+k>=max-k)
        cout<<min+k<<endl;
        else
        cout<<-1<<endl;
    }
    return 0;
}