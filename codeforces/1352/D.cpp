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
        ll aa[n];
         deque<ll> h;
        f(n) {
            cin>>aa[i];
            h.pb(aa[i]);
        }
        ll a=aa[0],b=0;
        ll sum=aa[0];
        h.pop_front();ll c=1;
        /*for(ll i=0;i<h.size();i++)
        cout<<h[i]<<" ";
        cout<<endl;*/
        while(true)
        {
            ll bkasum=0,i=0;
            while(bkasum<=sum)
            {
                if(h.size()>=1)
                {bkasum+=h.back();i=1;}
                if(h.size()>0)
                h.pop_back();
                else
                break;
                
            }
            b+=bkasum;
            if(i==1)
            c++;
            if(h.size()==0)
            break;
            
            sum=0;ll j=0;
            while(sum<=bkasum)
            {
                
                if(h.size()>=1)
                {sum+=h.front();j=1;}
                //cout<<h.front()<<" a"<<endl;
                if(h.size()>0)
                h.pop_front();
                else
                break;
                //cout<<h.front()<<endl;
            }
            a+=sum;
            if(j==1)
            c++;
            if(h.size()==0)
            break;
            
        }
        cout<<c<<" "<<a<<" "<<b<<endl;
       
    }
    return 0;
}