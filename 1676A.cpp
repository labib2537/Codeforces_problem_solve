#include<iostream>
#include<cstring>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    string digit;

    cin >> t;

    while(t--)
    {
      cin >> digit;
      int a=digit[0]-'0',b=digit[1]-'0',c=digit[2]-'0';
      int x=digit[3]-'0',y=digit[4]-'0',z=digit[5]-'0';

      if(a+b+c == x+y+z)
      {
          cout << "YES" << endl;
      }
      else
      {
          cout << "NO" << endl;
      }

    }



    return 0;
}
