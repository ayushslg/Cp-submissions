#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string xat;
        cin>>xat;
        int flag=1;
        int a[n],b[n];
        a[0]=1;
        b[0]=1;
        for(int i=1;i<n;i++)
        {
            if(flag==0)
            {
                if(xat[i]=='1')
                {
                    a[i]=0;
                    b[i]=1;
                }
                else if(xat[i]=='2')
                {
                    a[i]=0;
                    b[i]=2;
                }
                else
                {
                    a[i]=0;
                    b[i]=0;
                }
            }
            else if(xat[i]=='1')
            {
                a[i]=1;
                b[i]=0;
                flag=0;
            }
            else if(xat[i]=='2')
            {
                a[i]=1;
                b[i]=1;
            }
            else
            {
                a[i]=0;
                b[i]=0;
            }
        }
        for(int i=0;i<n;i++)
        {
            cout<<a[i];
        }
        cout<<endl;
        for(int i=0;i<n;i++)
        {
            cout<<b[i];
        }
        cout<<endl;
    }
       
        
    return 0;
}