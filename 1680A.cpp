#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int a,b,c,d;

        cin >> a >> b >> c >> d;
        if(max(a,c)<=min(b,d))
        {
            cout << max(a,c) << endl;
        }
        else
        {
            cout << a+c << endl;
        }



    }
}
