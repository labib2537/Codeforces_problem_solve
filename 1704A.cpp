#include <bits/stdc++.h>
#include<iostream>
#include <string.h>
using namespace std;

int main()
{
   int t;
   string a,b;
   char change;
   cin >> t;
   while(t--)
   {
       int n,m;
       cin >> n >> m;
       cin >> a >> b;

       char ch = b[0];
       while(a.size() > b.size())
       {
           if(ch == a[0]){
            a[1] = a[0];
            a.erase(a.begin());
           }else{
               a.erase(a.begin());
           }
       }

       if(a!=b)
       {
           cout << "NO" << endl;
       }else{
           cout << "YES" << endl;
       }


   }
}
