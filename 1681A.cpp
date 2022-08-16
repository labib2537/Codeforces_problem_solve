
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
        int a,b,am=0,bm=0;
        cin >> a;
        int alice[a];
        for(int i=0;i<a;i++)
        {
            cin >> alice[i];
            am = max(am,alice[i]);

        }
        cin >> b;
        int bob[b];
        for(int i=0;i<b;i++)
        {
            cin >> bob[i];
            bm = max(bm,bob[i]);
        }

        if(am>bm)
        {
            cout << "Alice" << endl;
            cout << "Alice" << endl;
        }
        else if(bm>am)
        {
            cout << "Bob" << endl;
            cout << "Bob" << endl;
        }

        if(am==bm)
        {
            cout << "Alice" << endl;
            cout << "Bob" << endl;
        }







    }
}
