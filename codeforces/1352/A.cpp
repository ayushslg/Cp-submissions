#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define vll vector<ll>
#define vlll vector<vll>
#define pb push_back
#define pf push_front
#define Imposter ios_base::sync_with_stdio(false);cin.tie(NULL);
#define f(n) for(ll i=0;i<n;i++)
#define all(x) x.begin(),x.end()


int main()
{
      
      
       Imposter
       
       
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        if(n/10==0)
        {
            cout<<1<<endl;
        cout<<n<<endl;
        }
        else
        {
            vll vec;
            ll tt=n,temp;ll j=0;
            while(tt>0)
            {
                
                temp=tt%10;
                if(temp==0)
                vec.pb(99);
                else
                vec.pb(temp);
                tt/=10;
            }
            ll c=0;
            for(ll i=0;i<vec.size();i++)
            {
                if(vec[i]!=99)
                c++;
            }
            cout<<c<<endl;
            for(ll i=0;i<vec.size();i++)
            {
                if(vec[i]==99)
                continue;
                else
                cout<<vec[i]*pow(10,i)<<" ";
            }
            cout<<endl;
            
        }
    }
    return 0;
}