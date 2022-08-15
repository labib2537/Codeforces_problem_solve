
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
        long long n,x=1;
        cin >> n;
        for(int i=1;i<=n/2;i++)
        {
            x*=i;
            if(x>998244353)
            {
                x = x % 998244353;
            }
        }
        if(n%2==1)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << (x * x) % 998244353 << endl;
        }
    }
}
