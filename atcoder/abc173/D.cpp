//nuber of cures ho raha hai multiplied by 2 naaki x
//pehla element jo x se bada ho.. agar koi bhi nhi toh siidha shuru se shuru kar
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
#define vll vector<ll>
#define all(x) x.begin(),x.end()
#define vlll vector<vll>
int main()
{
    Imposter
    
    int t=1;
    //cin>>t;
    while(t--)
    {
       ll n;
       cin>>n;
       ll a[n];
       f(n) cin>>a[i];
       sort(a,a+n);
       reverse(a,a+n);ll comfort=a[0];
       if(n==2)
       {
           cout<<a[0]<<endl;
           return 0;
       }
       if(n==3)
       {
           cout<<a[0]+a[1]<<endl;
           return 0;
       }
       if(n&1)
       {
           ll c=0, i=1;
           for( i=1;i<n;i++)
           {
               comfort+=2*a[i];
               c+=2;
               //cout<<c<<" "<<a[i]<<endl;
               if(c==n-3)
               break;
           }
           comfort+=a[i+1];
       }
       else
       {
           ll c=0;
           for(ll i=1;i<n;i++)
           {
               comfort+=2*a[i];
               c+=2;
               if(c==n-2)
               break;
           }
       }
       
       cout<<comfort<<endl;
    }
    return 0;
}