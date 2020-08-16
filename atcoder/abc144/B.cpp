#include<bits/stdc++.h>
using namespace std;
typedef long long int i64;
i64  mod= 1000000007;
void inline solve(int tt){

    i64 n;
    cin>>n;
    for(int i=1;i<=9;i++)
    {
        if((n%i)==0)
        {
            int q=n/i;
            if(q>=1 and q<=9)
            {
                cout<<"Yes"<<endl;
                return;
            }
        }
    }
    cout<<"No"<<endl;

}
int main()
{
    int tt=0,t=1;
    //cin>>t;

    while(t--){solve(++tt);}
}

