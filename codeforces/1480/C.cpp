#include<bits/stdc++.h>
#define Imposter ios_base::sync_with_stdio(false);cin.tie(NULL);
#define pb push_back
#define ll long long int
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#pragma GCC optimize("O3")
using namespace __gnu_pbds;
#define ordered_set tree<ll, null_type,less_equal<ll>, rb_tree_tag,tree_order_statistics_node_update>//s.order_of_key(val) *s.find_by_order(ind)
using namespace std;
#define f(n) for(ll i=0;i<n;i++)
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define input(arr,n) for(ll i1=0;i1<n;i1++ )cin>>arr[i1]
#define endl "\n"
#define vll vector<ll>
#define vlll vector<vll>
#define all(x) x.begin(),x.end()
ll power(ll x, ll y, ll p) { 
    ll res = 1;    x = x % p;  
    while(y > 0) {
        if(y & 1) res = (res*x) % p; 
        y = y>>1;    x = (x*x) % p; 
    } return res; 
}
inline void solve()
{
    int n;
    scanf("%d",&n);
    fflush(stdin);
    vector<int> a(n+2);
    a[0]=1e8,a[n+1]=1e8;
    int low=1,high=n;
    int mid;int ans;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(mid>1 and mid<n)
        {
            printf("? %d\n",mid+1);
        fflush(stdout);
        scanf("%d",&a[mid+1]);
        fflush(stdin);
        printf("? %d\n",mid-1);
        fflush(stdout);
        scanf("%d",&a[mid-1]);
        fflush(stdin);
        }
        printf("? %d\n",mid);
        fflush(stdout);
        scanf("%d",&a[mid]);
        fflush(stdin);
        if(a[mid]<a[mid-1] and a[mid]<a[mid+1])
        {
            ans=mid;
            break;
        }
        else
        {
            if(a[mid]>a[mid-1])
            {
                high=mid-1;
            }
            else
            {
                low=mid+1;
            }
        }
        
    }
    printf("! %d\n", ans);
    fflush(stdout);
    
    
}
int main()
{
    Imposter
    
    int t=1;
    //cin>>t;
    while(t--)
    {
        solve();
        
    }
    return 0;
}