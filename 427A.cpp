#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t,n,police=0, crime=0;
    cin >> t;
    while(t--)
    {
        cin >> n;
        if(n>0)
        {
            police+=n;
        }
        if(n<0 && police==0)
        {
            crime++;
        }
        if(n<0 && police!=0)
        {
            police--;
        }
    }

    cout << crime << endl;


    return 0;
}
