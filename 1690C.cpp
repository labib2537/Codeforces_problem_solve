
#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std;
long long a[200000], b[200000];
int main()
{
    int t;

    cin >> t;
    while(t--)
    {
        long long n;
        cin >> n;

        for(int i=0;i<n;i++)
        {
            cin >> a[i];
        }
        for(int i=0;i<n;i++)
        {
            cin >> b[i];
        }

        for(int i=0;i<n;i++)
        {
            cout << min(b[i]-a[i], b[i]-b[i-1]) << " ";
        }
        cout << endl;



    }
}
