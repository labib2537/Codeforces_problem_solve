
#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std;
//long long a[200010];


int main()
{
    int t;
    string s[100];
    cin>>t;
    while(t--)
    {
        long long n, k=0;
        cin >> n;
        if(n%2==0)
        {
            cout << 0 << endl;
        }
        else
        {
            while(n>=10)
            {
                n/=10;
                if(n%2==0)
                {
                    k++;
                }
            }
            //cout << n << endl;
            if(n%2==0)
            {
                cout << 1 << endl;
            }
            else if(k>=1)
            {
                cout << 2 << endl;
            }
            else
            {
                cout << -1 << endl;
            }
        }




    }
}
