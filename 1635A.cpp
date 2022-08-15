
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
        long long n;
        cin >> n;
        long long a[n],i, s=0;
        for(i=0;i<n;i++)
        {
            cin >> a[i];
            s = a[i] | s;
        }

        cout << s << endl;

    }
}
