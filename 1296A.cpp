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
        int n;
        cin >> n;
        int a[n], c=0;
        for(int i=0; i<n; i++)
        {
            cin >> a[i];
            if(a[i]%2!=0)
            {
                c++;
            }
        }
        if(c==n && n%2==0)
        {
            cout << "NO" << endl;
        }
        else if(!c)
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
 
