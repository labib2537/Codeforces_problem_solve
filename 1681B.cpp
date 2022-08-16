
#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std;
//long long a[200010];
int main()
{
    int t;

    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin >> a[i];

        }
        int m;
        cin >> m;
        int b[m];
        long long res=0;
        for(int i=0;i<m;i++)
        {
            cin >> b[i];
            res+=b[i];
        }

        cout << a[res%n] << endl;



    }
}
