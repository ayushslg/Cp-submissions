#include<bits/stdc++.h>

#define Imposter ios_base::sync_with_stdio(false);cin.tie(NULL);

#define pb push_back

#define ll long long int

using namespace std;

#define rep(i,a,b) for(ll i=a;i<b;i++)

#define input(arr,n) for(ll i1=0;i1<n;i1++ )cin>>arr[i1]

#define endl "\n"

#define ld long double

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

ll n,x,sum;

inline void solve()

{

		    ll pw3=3,pw5=5;    ll n;

    cin>>n;

    for(int i=1;pw3<=n;++i) {

        pw5 = 5;

        for(int j=1;pw5<=n;++j) {

            if(pw3 + pw5 == n) {

                cout << i << " " << j << endl;

                return;

            }

            pw5 = pw5 * 5;

        }

        pw3 = pw3 * 3;

    }

    cout << -1 << endl;

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