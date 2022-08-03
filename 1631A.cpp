
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main( )
{
    int t,n,i,j,temp;
    cin >> t;
    while(t--)
    {
        cin >> n;
        int a[n],b[n];
        int maxA, maxB;
        for(i=0; i<n; i++)
        {
            cin >> a[i];
        }
        for(i=0; i<n; i++)
        {
            cin >> b[i];
        }
        for(i=0; i<n; i++)
        {
            if(a[i]>b[i])
            {
                temp = a[i];
                a[i] = b[i];
                b[i] = temp;
            }
        }

        for(i=0; i<n; i++)
        {
            maxA = *max_element(a,a+n);
            maxB = *max_element(b,b+n);
        }

        cout << maxA*maxB << endl;

    }


}



