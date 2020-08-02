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
#define rep(i,a,b) for(i=a;i<b;i++)
#define input(arr,n) for(ll i1=0;i1<n;i1++ )cin>>arr[i1]
#define vll vector<ll>
#define vlll vector<vll>
#define all(x) x.begin(),x.end()
int main()
{
    Imposter
    
    ll n;
    cin>>n;
    string str;
    cin>>str;int k,j;
    for( k=n-1;k>=0;k--)
    {
        if(str[k]=='W')
        continue;
        else
        break;
    }
    for(j=0;j<n;j++)
    {
        if(str[j]=='R')
        continue;
        else
        break;
    }
    ll ans=0;
    for(int i=j;i<=k;i++)
    {
        if(str[i]=='W')
        {
            int flag=0;
            for(int l=k;l>=i;l--)
            {
                k--;
                if(str[l]=='R')
                {
                    str[i]='R';
                    str[l]='W';
                    //cout<<i<<" "<<l<<endl;
                    ans++;
                    flag=1;
                    break;
                }
            }
            if(!flag)
            break;
        }
    }
    cout<<ans<<endl;
    
    
    return 0;
}