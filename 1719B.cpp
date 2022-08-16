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
        int n,k;
        cin>>n>>k;
        k%=4;
        if(k==0)
        {
            cout << "NO" << endl;
            continue;
        }
        cout << "YES" << endl;
        for(int i=1; i<=n; i+=2)
        {
            if(k==2&&i%4!=3)
            {
                cout<<i+1<<' '<<i<<'\n';
            }
            else
            {
                cout<<i<<' '<<i+1<<'\n';

            }
        }





    }
}
