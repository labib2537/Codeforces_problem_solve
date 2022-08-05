#include <bits/stdc++.h>
#include<iostream>
#include <string.h>
using namespace std;

int main()
{
    int t,cnt,m,i,j,k,l;

    cin >> t;
    int n;
    while(t--)
    {
        cin >> n;

        cout << n << endl;
        for(i = 0; i < n; i++)
        {
            int k=2;
            for(j = 0; j < n; j++)
            {
                if(j==i)
                {
                    cout << 1 << " ";
                }
                else
                {
                    cout << k++ << " ";

                }
            }
            cout << endl;
        }

    }
}
