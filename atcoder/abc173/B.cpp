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
       
       ll n,ac=0,tle=0,wa=0,re=0;
       cin>>n;
       f(n)
       {
           string s;
           cin>>s;
           if(s=="AC")
           ac++;
           else if(s=="TLE")
           tle++;
           else if(s=="WA")
           wa++;
           else
           re++;
       }
       cout<<"AC x "<<ac<<endl;
       cout<<"WA x "<<wa<<endl;
       cout<<"TLE x "<<tle<<endl;
       cout<<"RE x "<<re<<endl;
    }
    return 0;
}