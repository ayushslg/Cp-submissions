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

ll lcm(ll a,ll b)
{
    return a/__gcd(a,b)*b;
}

ll solve(ll n)
{
    ll ans;
    for(ll i=1;i*i<=n;i++)
    {
        if(n%i==0 && lcm(i,n/i)==n)
        {
            ans=i;
        }
    }
    cout<<ans<<" "<<n/ans;
}

int main()
{
      
      
       Imposter
       
       
    ll x;
    cin>>x;
    solve(x);
    return 0;
}