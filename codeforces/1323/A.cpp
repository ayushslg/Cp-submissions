#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define has std::unordered_map<int,int>hash

int main() {
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,temp,flag=0,sum=0;
        cin>>n;
        ll a[n];
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]%2==0)
            {
                flag=1;
                temp=i;
            }
        }
        if(flag==1)
        {
            cout<<1<<endl;
            cout<<temp+1<<endl;
        }
        else if(n==1)
        {
            if(a[0]%2==0)
            cout<<1<<endl<<1<<endl;
            else
            cout<<-1<<endl;
        }
        else
        {
            cout<<2<<endl;
            cout<<1<<" "<<2<<endl;
        }
        
  
    }
	// your code goes here
	return 0;
}
