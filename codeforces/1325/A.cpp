#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        if(n%2==0)
        cout<<n/2<<" "<<n/2<<endl;
        else
        cout<<1<<" "<<n-1<<endl;
    }
    return 0;
}