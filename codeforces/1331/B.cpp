#include<bits/stdc++.h> 
using namespace std;
#define ll long long int
int main() 
{ 
    ll t,i;
    cin>>t;
    for(i=2;i<t;i++)
    {
        if(t%i==0)
        {
            cout<<i<<t/i<<endl;
            break;
        }
    }
} 
