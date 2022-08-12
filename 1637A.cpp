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
        cin >> n;
        int a[n], o[n], c=0;
        for(int i=0; i<n; i++)
        {
            cin >> a[i];
            o[i] = a[i];
        }
        sort(a,a+n);
        for(int i=0; i<n; i++)
        {
            if(o[i]==a[i])
            {
                c++;
            }
        }

        if(c==n)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }




    }

    return 0;
}
