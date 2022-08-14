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
        int z,o;
        cin >> z >> o;
        int x = z;
        int y = o;
        for(int i=0;i<max(x,y);i++)
        {
            if(z>0)
            {
                cout << 0;
                z--;
            }
            if(o>0)
                {
                cout << 1;
                o--;
            }
        }

        cout << endl;


    }
}
