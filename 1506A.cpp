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
       long long n, m, x;
       cin >> n >> m >> x;
       long long a = (x-1)%n;
       long long b = (x-1)/n;
       cout << a*m+b+1 << endl;
    }
}
