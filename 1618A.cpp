#include <bits/stdc++.h>
#include<iostream>
#include <string.h>
using namespace std;

int main()
{
   int t;
   long long arr[7],a,b,c;

   cin >> t;
   while(t--)
   {
       for(int i=0;i<7;i++)
       {
           cin >> arr[i];
       }

       a = arr[0];
       b = arr[1];
       c = arr[6] - (a+b);

       cout << a << " " << b << " " << c << endl;


   }
}
