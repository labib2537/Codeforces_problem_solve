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
        long long x = n&-n;

        if(n==1)
        {
            cout << 3 << endl;
        }
        else if(n-x)
        {
            cout << x << endl;
        }
        else
        {
            cout << x+1 << endl;
        }



    }

    return 0;
}
