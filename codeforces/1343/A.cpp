#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define vll vector<ll>
#define vlll vector<vll>
#define pb push_back
#define imposter ios_base::sync_with_stdio(false);cin.tie(NULL);
#define f(n) for(ll i=0;i<n;i++)
int main()
{
    imposter
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        if(n%3==0)
        cout<<n/3<<endl;
        else if(n%7==0)
        cout<<n/7<<endl;
        else
        {
            ll x=3,k=2;
            while(1)
            {
            
                if(n%x==0)
                {cout<<n/x<<endl;
                break;
                }
                x+=pow(2,k);
                k++;
            }
        }
    }
    return 0;
}
   