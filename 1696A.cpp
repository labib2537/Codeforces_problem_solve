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
        int n,m;
        cin >> n >> m;
        int a[n],s=0;
        for(int i=0; i<n; i++)
        {
            cin >> a[i];
        }
        for(int i=0; i<n; i++)
        {
            if(a[i]>s)
            {
                s = a[i];
            }
            a[i] = a[i] | m;
            if(a[i]>s)
            {
                s = a[i];
            }
        }
        cout << s << endl;


        /*
                cout << endl;
                int c = 2 | 5;   // use for addition
                cout << c << endl;
        */


    }
}
