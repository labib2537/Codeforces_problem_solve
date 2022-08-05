#include <bits/stdc++.h>
#include<iostream>
#include <string.h>
using namespace std;

int main()
{
    int t,a,b,c;

    cin >> t;
    while(t--)
    {
        cin >> a >> b >> c;

        if((a==b+c) || (b==a+c) || (c==b+a) || (a==b && c%2==0) || (c==b && a%2==0) || (a==c && b%2==0))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }



    }
}
