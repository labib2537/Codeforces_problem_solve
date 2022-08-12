#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long t,n,i;
    cin >> t;
    while(t--)
    {
        string x, y;
        int flag=0;
        cin >> x >> y;
        for(int i=0;i<x.size();i++)
        {
            if(x[i]==y[0] && i%2==0)
            {
                flag = 1;
            }
        }
        if(flag==1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }




    }

    return 0;
}
