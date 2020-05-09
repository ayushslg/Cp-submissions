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
        if(n%2==0 && k%2==0)
        {
            if(k>n)
            cout<<"NO"<<endl;
            else
            {
            cout<<"YES"<<endl;
            for(ll i=0;i<k-1;i++)
            cout<<1<<" ";
            cout<<n-(k-1)<<endl;
            }
        }
        else if(n%2==0 && k%2!=0)
        {
            if((2*k)>n)
            cout<<"NO"<<endl;
            else
            {
                cout<<"YES"<<endl;
                for(ll i=0;i<k-1;i++)
                cout<<2<<" ";
                cout<<(n-(k-1)*2)<<endl;
            }
        }
        else if(n%2!=0 && k%2==0)
        cout<<"NO"<<endl;
        else
        {
            if(k>n)
            cout<<"NO"<<endl;
            else
            {
                cout<<"YES"<<endl;
                for(ll i=0;i<k-1;i++)
                cout<<1<<" ";
                cout<<n-(k-1)<<endl;
            }
        }
    }
    return 0;
}