
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
        long n;
        cin >> n;
        if(n<20)
        {
            cout << "YES" << endl;
            int x=1;
            for(long i=1;i<=n;i++)
            {
                cout << x << " " ;
                x*=3;
            }
            cout << endl;
        }
        else
        {
            cout << "NO" << endl;
        }

    }
}
