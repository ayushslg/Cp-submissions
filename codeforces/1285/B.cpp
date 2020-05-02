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
        ll a[n],sum=0;bool ok=true;
        f(n){ 
            cin>>a[i];
            
            }
            f(n)
            {
                sum+=a[i];
            if(sum<=0){
                ok=false;
                 cout<<"NO"<<endl;
                 break;
            }
        }sum=0;
        if(ok)
        {
       for(ll i=n-1;i>=0;i--)
       {
           sum+=a[i];
           if(sum<=0)
           {
               ok=false;
               cout<<"NO"<<endl;
               break;
           }
           
       }
        }
       if(ok)
        cout<<"YES"<<endl;
    }
    return 0;
}