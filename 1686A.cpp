#include <bits/stdc++.h>
#include<iostream>
#include <string.h>
using namespace std;

int main()
{
    int t,cnt;
    int a,b,c,x,y,z;
    char change;
    cin >> t;
    while(t--)
    {

        cin >> x;
        int a[x],s=0;
        int flag = 0;
        for(int i=0; i<x; i++)
        {
            cin >> a[i];
            s+=a[i];
        }
        for(int i=0; i<x; i++)
        {
            if((s-a[i])*1.0/(x-1)==a[i])
            {
                flag=1;
                break;
            }
        }



        if(flag==1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }



    }
}
