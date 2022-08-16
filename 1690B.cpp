
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

        long long c=0;

        for(int i=0;i<n;i++)
        {
            c = max(a[i]-b[i], c);
        }
        int flag = 1;
        for(int i=0;i<n;i++)
        {
            if(b[i] && a[i]-b[i]!=c)
            {
                flag=0;
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
}
