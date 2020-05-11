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
        string str;
        cin>>str;
        ll ans=0,x=0,y=0;
        set<pair<ll,ll>> panmasala;
        f(str.length())
        {
            ll puranax=x,puranay=y;
            if(str[i]=='N')y++;
            else if(str[i]=='S')y--;
            else if(str[i]=='E')x++;
            else x--;
            if(panmasala.find(make_pair(y+puranay,x+puranax))==panmasala.end())
            {
                panmasala.insert((make_pair(y+puranay,x+puranax)));ans+=5;
            }
            else
            ans++;
        }
        cout<<ans<<endl;
    }
    return 0;
}