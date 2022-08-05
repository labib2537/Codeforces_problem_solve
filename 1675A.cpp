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
         cin >> a >> b >> c >> x >> y;
         if(a<=x)
         {
             c = c - (x-a);
         }
         if(b<=y)
         {
             c = c - (y-b);
         }
         if(c>=0)
         {
             cout << "YES" << endl;
         }
         else
         {
             cout << "NO" << endl;
         }


    }
}
