#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n+1]; // n+1 is because, I want to start from 1, instead of 0

    int i,p,j;
    for(i=1;i<=n;i++)
    {
        cin>>p;
        a[i]=p;
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(a[j]==i)
            {
                // To avoid last SPACE
                if(i==n){cout<<j<<endl;}
                else {cout<<j<<" ";}
            }
        }
    }




    return 0;
}
