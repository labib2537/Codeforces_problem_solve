#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t,i;
    cin >> t;
    while(t--)
    {
        long long n;
        cin >> n;
        if(n<2050 || n%2050!=0)
        {
            cout<< -1 <<endl;

        }
        else
        {
            n/=2050;
            int c=0;
            while(n>0)
            {
                c+=n%10;
                n/=10;
            }
            cout << c << endl;
        }

    }
    return 0;
}
