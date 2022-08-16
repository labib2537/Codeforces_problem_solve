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
      long long n, m, t;
      cin >> n >> m;
      t = n+m;
      if(t%2==0)
      {
          cout << "Tonya" << endl;
      }
      else
      {
          cout << "Burenka" << endl;
      }

    }
}
