#include<bits/stdc++.h>
#define Imposter ios_base::sync_with_stdio(false);cin.tie(NULL);
#define pb push_back
#define ll  long long int
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#pragma GCC optimize("O3")
using namespace __gnu_pbds;
#define ordered_set tree<ll, null_type,less_equal<ll>, rb_tree_tag,tree_order_statistics_node_update>//s.order_of_key(val) *s.find_by_order(ind)
using namespace std;
#define f(n) for(ll i=0;i<n;i++)
#define vll vector<ll>
#define vlll vector<vll>
void findDivisors(ll n) 
{ 
  
    // Array to store the count 
    // of divisors 
    ll div[n + 1]; 
    memset(div, 0, sizeof div); 
  
    // For every number from 1 to n 
    for (ll i = 1; i <= n; i++) { 
  
        // Increase divisors count for 
        // every number divisible by i 
        for (ll j = 1; j * i <= n; j++) 
            div[i * j]++; 
    } 
  
    // Print the divisors 
    ll ans=0;
    for (int i = 1; i <= n; i++) 
    ans+=i*div[i];
    cout<<ans<<endl;
         
} 
  
// Driver code 
int main() 
{ 
    ll n;
    cin>>n;
    findDivisors(n); 
  
    return 0; 
} 