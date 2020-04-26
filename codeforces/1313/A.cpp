#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define vll vector<ll>
#define vlll vector<vll>
#define pb push_back
#define Imposter ios_base::sync_with_stdio(false);cin.tie(NULL);
#define f(i,n) for(ll i=0;i<(ll)n;i++)
#define all(x) x.begin(),x.end()

int main()
{
    
      Imposter
    
    
    ll t;
    cin>>t;
    while(t--)
    {
        ll a[3],ans=0;
        cin>>a[0]>>a[1]>>a[2];
        sort(a,a+3);
        reverse(a,a+3);
        if(a[0] > 0) { a[0]--; ans++; }
    if(a[1] > 0) { a[1]--; ans++; }
    if(a[2] > 0) { a[2]--; ans++; }
    if(a[0] > 0 && a[1] > 0) { a[0]--; a[1]--; ans++; }
    if(a[0] > 0 && a[2] > 0) { a[0]--; a[2]--; ans++; }
    if(a[1]> 0 && a[2] > 0) { a[1]--; a[2]--; ans++; }
    if(a[0] > 0 && a[1] > 0 && a[2] > 0) ans++;
    cout << ans << endl;
    }
}