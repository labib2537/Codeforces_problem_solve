#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;

    int n;
    cin >> n;
    int a[n],c=0;
    for(int i=0; i<n; i++)
    {
        cin >> a[i];

    }

    for(int i=0;i<n;i++)
    {
         if(a[i]!=a[i+1])
        {
            c++;
        }
    }
    cout << c << endl;








    return 0;
}
