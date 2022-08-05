#include <bits/stdc++.h>
#include<iostream>
#include <string.h>
using namespace std;

int main()
{
    int t,n;
    long long a,b,c,x,y;

    cin >> t;

    while(t--)
    {
        cin >> x >> y;
        if(y%x!=0)
        {
            cout << 0 << " " << 0 << endl;
        }
        else
        {
            cout << 1 << " " << y/x << endl;
        }


    }
}
