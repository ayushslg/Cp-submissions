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
        ll n,k;
        cin>>n>>k;
        ll o=k/2;
        if(k==n||(k>n && o>n))
        cout<<n<<endl;
        else if(k>n)
        cout<<k/2<<endl;
        else
        {
            if(n%k==0)
            cout<<n<<endl;
            else
            {
                ll p=n/k;
                ll temp=n%k;
                ll n=k*p;
                ll tt=k/2;
                if(temp<=tt)
                cout<<n+temp<<endl;
                else
                cout<<n+tt<<endl;
                
            }
        }
    }
    
    
    return 0;
}