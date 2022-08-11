#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long t,n;
    cin >> t;
    while(t--)
    {
        cin >> n;
        int x=n%7;
        if(n%10-x<0)
        {
            n=n+7-x;
            cout << n << endl;
        }
        else
        {
            n-=x;
            cout << n << endl;
        }



    }

    return 0;
}
