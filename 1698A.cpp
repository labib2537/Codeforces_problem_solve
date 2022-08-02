#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,last;
    cin >> t;
    while(t--)
    {

        cin >> n;
        int a[n];
        for(int i=0; i<n; i++)
        {
            cin >> a[i];
            last = a[n-1];

        }
        cout << last << endl;


    }


    return 0;
}
