#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t,n,k;
    cin >> t;

    while(t--)
    {
        int n, m;
        cin >> n >> m;
        int a[n];
        char b[m];
        for(int i=1; i<=n; i++)
        {
            cin >> a[i];

        }
        for(int i=1; i<=m; i++)
        {
            b[i]='B';

        }
        for(int i=1; i<=n; i++)
        {
            int x=min(a[i],m+1-a[i]), y=max(a[i],m+1-a[i]);
            if(b[x]=='B')
            {
                b[x]='A';
            }
            else
            {
                b[y]='A';
            }

        }

        for(int i=1; i<=m; i++)
        {
            cout << b[i];

        }

        cout << endl;


    }

}
