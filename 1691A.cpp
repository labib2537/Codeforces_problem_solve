
#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;
int main( )
{
    int t,n,i,j,temp,x,y;
    cin >> t;
    while(t--)
    {
        cin >> n;
        int a[n],oc=0,flag=0;
        for(i=0; i<n; i++)
        {
            cin >> a[i];
            if(a[i]%2==1)
            {
                oc++;
            }

        }
        cout << min(oc,n-oc) << endl;

    }



}






