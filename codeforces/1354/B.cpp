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
    
    ll t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;ll f=0,fa=0,fac=0;
        f(s.size())
        {
            if(s[i]=='1')
            f=1;
            else if(s[i]=='2')
            fa=1;
            else if(s[i]=='3')
            fac=1;
        }
        if(f>0 && fa>0 && fac>0 && s.size()>=3)
        {
            ll falg=0;
            if(s.size()==3)
            cout<<3<<endl;
            else
            {
                ll ans=s.size();
                ll i=0;
                while(i<s.size()-2)
                {
                    if(abs(s[i+1]-s[i])>0)
                    {
                        
                        if(s[i+2]!=s[i])
                        {
                            if(s[i+2]!=s[i+1])
                            {
                                cout<<3<<endl; falg=1;break;
                            }
                            else
                            {
                            char ch=s[i+1];
                            char ch1=s[i];ll temp=2;bool ok=false;
                            while(s[i+2]!=ch1 && i<s.size()-2)
                            {
                                temp++;
                                if(s[i+2]!=ch)
                                {
                                    ok=true;
                                    break;
                                }
                                i++;
                            }
                            if(ok)
                            ans=min(ans,temp);
                            }
                        }
                        else
                        i++;
                        
                    }
                    else
                    i++;
                }
                if(!falg)
                cout<<ans<<endl;
            }
            
            
        }
        else
        cout<<0<<endl;
    }
    return 0;
}