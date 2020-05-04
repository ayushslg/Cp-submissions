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
        string s(n,'a');
        for(ll i=n-2;i>=0;i--)
        {
            if(k<=n-i-1)
            {
                s[i]='b';
                s[n-k]='b';
                cout<<s<<endl;
                break;
            }
            k-=n-i-1;
        }
    }
    
    
    return 0;
}