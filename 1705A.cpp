#include <bits/stdc++.h>
#include<iostream>
#include <string.h>
using namespace std;

int main()
{
    int t,cnt;

    char change;
    cin >> t;
    while(t--)
    {
        int n,m,x;
        cin >> n >> x;
        int a[n*2],f[n*2],b[n*2];
        cnt=0;
        for(int i=0; i<n*2; i++)
        {
            cin >> a[i];


        }
        sort(a,a+(n*2));
        for(int i=0; i<n; i++)
        {
            f[i]=a[i];
        }

        for(int i=n; i<n*2; i++)
        {
            b[i]=a[i];
        }

        for(int i=0; i<n; i++)
        {

            if( b[i+n] - f[i] >= x)
            {
                cnt++;
            }
        }


        if(cnt==n)
        {
            cout << "YES" << endl;

        }
        else
        {
            cout << "NO" << endl;
        }


    }
}
