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
        set<ll> s;
        ll a[n];
        f(n){
             cin>>a[i];
             s.insert(a[i]);
        }
        if(s.size()>k)
        {
            cout<<-1<<endl;
        }
        else
        {
            cout<<n*k<<endl;
            for(ll i=0;i<n;i++)
            {
                for(auto it=s.begin();it!=s.end();++it)
                cout<<*it<<" ";
                for(ll j=0;j<k-s.size();j++)
                cout<<1<<" ";
            }
            cout<<endl;
        }
        
    }
    
    
    return 0;
}