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
    ll q;
    cin>>q;
    while(q--)
    {
        ll n,m,cnt=0;
        cin>>n>>m;
        ll b=m+1;
        while(b>0)
        {
            b/=10;
            cnt++;
        }
        cout<<n*(cnt-1)<<endl;
    }
    return 0;
}
   