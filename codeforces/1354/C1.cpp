#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define vll vector<ll>
#define vlll vector<vll>
#define pb push_back
#define pf push_front
#define Imposter ios_base::sync_with_stdio(false);cin.tie(NULL);
#define endl "\n"
#define oset tree<int, null_type,less<pair<int,int>>,rb_tree_tag,tree_order_statistics_node_update>
#define f(n) for(ll i=0;i<n;i++)
#define all(x) x.begin(),x.end()
 float calculateSide(float n, float r) 
{ 
    float theta, theta_in_radians; 
  
    theta = 360 / n; 
    theta_in_radians = theta * 3.14 / 180; 
  
    return 2 * sin(theta_in_radians / 2)/r; 
} 
int main()
{
    
    Imposter
    
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll temp=n*2;
        double theta=90.0-(90.0/n);
        double size=tan((theta*3.141592653589)/180.0);
        cout<<fixed<<setprecision(7)<<size<<endl;
 
        
    }
    return 0;
}