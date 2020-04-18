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
    ll n,m,a,sum=0,sum1=0,tt=0,t=0;
    cin>>n>>m>>a;
    if(n%a==0)
    t=n/a;
    else
    t=n/a +1;
    if(m%a==0)
    tt=m/a;
    else
    tt=m/a +1;
    cout<<t*tt<<endl;
    return 0;
}
   