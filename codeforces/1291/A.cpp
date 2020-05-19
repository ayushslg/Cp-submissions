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
 
int main()
{
    
    Imposter
    
    ll q;
    cin>>q;
    while(q--)
    {
        ll n;string s;
        cin>>n;
        cin>>s;
        if(n==1)
        cout<<-1<<endl;
        else
        {
            ll temp=0;
            for(ll i=n-1;i>=0;i--)
            {
                if((s[i]-'0')%2!=0)
                {
                    temp=i;
                    break;
                }
            }
            if(temp==0)
            cout<<-1<<endl;
            else
            {
                ll p=temp,sum=0;
            f(temp)
            {
                if((s[i]-'0')%2!=0)
                p=i;
                sum+=(s[i]-'0');
            }
            if(sum%2==0)
            {
                if(p==temp)
                cout<<-1<<endl;
                else
                {
                    f(temp+1)
                    {
                        if(i==p)
                        continue;
                        cout<<s[i];
                    }
                    cout<<endl;
                }
            }
            else
            {f(temp+1)
            cout<<s[i];
            cout<<endl;
            }
            }
            
        }
        
    }
    return 0;
}