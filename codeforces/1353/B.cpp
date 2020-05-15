#include<bits/stdc++.h>
using namespace std;
#define ll int
#define vll vector<ll>
#define vlll vector<vll>
#define pb push_back
#define pf push_front
#define Imposter ios_base::sync_with_stdio(false);cin.tie(NULL);
#define endl "\n"
#define oset tree<int, null_type,less<pair<int,int>>,rb_tree_tag,tree_order_statistics_node_update>
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
        cin>>n>>k;ll k1=k;
        ll a[n],b[n],s[n],suma=0,sumb=0;
        f(n){ cin>>s[i];a[i]=s[i];suma+=a[i];}
        f(n){ cin>>b[i];sumb+=b[i];}
        sort(a,a+n);
        sort(b,b+n);
        reverse(b,b+n);
        ll i=0,sum=0;
        while(i<n && k>0)
        {
            if(b[i]>a[i])
            {
                a[i]=b[i];
                k--;
            }
            i++;
        }
        f(n) sum+=a[i];
        cout<<sum<<endl;
    }
    
    return 0;
}