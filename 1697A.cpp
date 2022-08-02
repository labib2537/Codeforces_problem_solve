#include <bits/stdc++.h>
#include<iostream>
#include <string.h>
using namespace std;

int main()
{
    int t,n,m,a[100],s;

    cin >> t;
    while(t--)
    {
        cin >> n >> m;
        s = 0;
        for(int i=0; i<n; i++)
        {
            cin >> a[i];
            s+=a[i];
        }
        if(s>m)
        {
            cout << s-m << endl;
        }
        else
        {
            cout << 0 << endl;
        }





    }
    return 0;
}
