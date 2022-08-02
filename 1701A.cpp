#include <bits/stdc++.h>
#include<iostream>
#include <string.h>
using namespace std;

int main()
{
    int t,mid,c[100][100],cut,i,j;
    string l;

    cin >> t;
    while(t--)
    {
        cut=0;
        for(i=0; i<2; i++)
        {
            for(j=0; j<2; j++)
            {
                cin >> c[i][j];
                cut += c[i][j];

            }

        }

        if(cut==0)
        {
            cout << 0 << endl;
        }
        else if(cut==4)
        {
            cout << 2 << endl;
        }
        else if(cut>0)
        {
            cout << 1 << endl;
        }







    }
    return 0;
}
