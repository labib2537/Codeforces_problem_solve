#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std;
//long long a[200010];


int main()
{
    int t;
    string s[100];
    cin>>t;
    while(t--)
    {
        int n;
       cin >> n;
       char ch[n];
       for(int i=0;i<n;i++)
       {
           cin >> ch[i];
       }
       for(int i=0;i<n;i++)
       {
           if(ch[i]=='U')
           {
               ch[i]='D';
           }
           else if(ch[i]=='D')
           {
               ch[i]='U';
           }

           cout << ch[i];
       }
       cout << endl;
    }
}
