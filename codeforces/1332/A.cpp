#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define fast ios_base::sync_with_stdio(false)
int main()
{
    fast;
    cin.tie(0);
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,b,c,d;
        cin>>a>>b>>c>>d;
        ll x,y,x1,y1,x2,y2;
        cin>>x>>y>>x1>>y1>>x2>>y2;
        x=b-a+x;
        y=-c+d+y;
        if(x>=x1 && x<=x2 && y>=y1 && y<=y2 && ((x2>x1)||((a+b)==0)) && ((y2>y1)||((c+d)==0)))
        cout<<"Yes"<<endl;
        else
        cout<<"No"<<endl;
    }
    return 0;
}