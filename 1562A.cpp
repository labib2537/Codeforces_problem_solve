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
       long long n, m;
       cin >> n >> m;
       if(n<(m/2)+1)
       {
           cout << m%((m/2)+1) << endl;
       }
       else
       {
           cout << m%n << endl;
       }



    }
}
