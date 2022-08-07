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
        int n,mid;

        cin >> n;
        int a[n];
        int one_weight=0, two_weight=0;
        for(int i=0;i<n;i++)
        {
            cin >> a[i];
            if(a[i]==1)
            {
                one_weight++;
            }
            else
            {
                two_weight++;
            }
        }

        if((one_weight%2==0 && two_weight%2==0) || (two_weight%2 && one_weight>=2 && one_weight%2==0))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }

    }


    return 0;
}
