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
        if(n%4!=0)
        cout<<"NO"<<endl;
        else
        {
            ll sum=0;
            cout<<"YES"<<endl;
            for(ll i=2;i<=n;i+=2)
            {
                cout<<i<<" ";
                sum+=i;
            }
            for(ll i=1;i<=n-2;i+=2)
            {
                cout<<i<<" ";
                sum-=i;
            }
            cout<<sum<<endl;
        }
    }
    return 0;
}
   