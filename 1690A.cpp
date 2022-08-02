#include <bits/stdc++.h>
#include<iostream>
#include <string.h>
using namespace std;

int main()
{

    long long d,c,n,t;

    cin >> t;
    while(t--)
    {
        cin >> n;

        d=n/3;

        if(n%3==0)
        {
            cout << d << " " << d+1 << " " << d-1 << endl;
        }
        else if(n%3==1)
        {
            cout << d << " " << d+2 << " " << d-1 << endl;
        }
        else if(n%3==2)
        {
            cout << d+1 << " " << d+2 << " " << d-1 << endl;
        }





    }
    return 0;
}
