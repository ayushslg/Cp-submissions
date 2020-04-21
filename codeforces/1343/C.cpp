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
        ll a[n];
        f(n) cin>>a[i];ll sum=0,max=0,maxi=-1000000009,i=0;
        while(i<n)
        {
            if(a[i]>0)
            {max=0;
            while(a[i]>0 && i<n)
            {
                if(a[i]>max)
                max=a[i];
                if(i<n)
                i++;
                else
                break;
            }
            sum+=max;
            }
            if(a[i]<0 && i<n)
            {maxi=-1000000009;
            while(a[i]<0 && i<n)
            {
                if(a[i]>maxi)
                maxi=a[i];
                if(i<n)
                i++;
                else
                break;
            }
            sum+=maxi;
            }
            
        
        }
        cout<<sum<<endl;
    }
    return 0;
}
   