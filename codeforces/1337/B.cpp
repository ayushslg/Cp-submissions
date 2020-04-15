#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define vll vector<ll>
#define vb vector<bool>
#define pb push_back
#define fast ios_base::sync_with_stdio(false)
int main()
{
    fast;
    cin.tie(0);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,x,m,flag=0;
        cin>>x>>n>>m;
        while(x>20 && n>0)
        {
            x= (x/2)+10;n--;
            if(x<=0)
            {
                cout<<"YES"<<endl;
                flag=1;
                break;
            }
        }
        if(flag!=1)
        {
        while(x>0 && m>0)
        {
            x=x-10;m--;
            if(x<=0)
            {
                cout<<"YES"<<endl;
                flag=1;
                break;
            }
        }
        }
        if(flag==0&&x>=0)
        cout<<"NO"<<endl;
    }
    return 0;
}