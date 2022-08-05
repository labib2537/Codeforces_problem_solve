#include <bits/stdc++.h>
#include<iostream>
#include <string.h>
using namespace std;

int main()
{
    int t,c,n;
    long long a,b;

    cin >> t;

    while(t--)
    {
         cin >> a >> b;
         if(a>0 || b>0)
         {
             cout << b/(a*a) << endl;
         }
         else{
            cout << 0 << endl;
         }


    }
}
