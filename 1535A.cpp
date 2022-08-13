#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t,n,k;
    cin >> t;

    while(t--)
    {
       int a, b, c, d;
       cin >> a >> b >> c >> d;
       if(max(a,b)>min(c,d) && max(c,d)>min(a,b))
       {
           cout << "YES" << endl;
       }
       else
       {
           cout << "NO" << endl;
       }



    }




}

