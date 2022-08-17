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
        int n;
        cin >> n;
        for(int i=1;i<=n;i++)
        {
            cout << i << " ";
            for(int j=n;j>=1;j--)
            {
                if(i!=j)
                {
                    cout << j << " ";
                }
            }
             cout << endl;
        }

    }
}
