#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll t,n,k;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        if(n%2!=k%2)
        cout<<"NO"<<endl;
        else if(k*k>n)
        cout<<"NO"<<endl;
        else
        cout<<"YES"<<endl;
    }
    return 0;
    
}