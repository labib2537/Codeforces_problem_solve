#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,b,c=0;

    cin >> n >> b;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
        a[i]+=b;
    }
    for(int i=0; i<n; i++)
    {
        if(a[i]<=5)
        {
            c++;
        }
    }
    cout << c/3 << endl;






    return 0;
}
