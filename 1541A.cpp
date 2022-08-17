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
        cin>>n;
        for(int i=1; i<n-2; i+=2)
        {
            cout<<i+1<<' '<<i<<' ';

        }
        if(n%2==1)
        {
            cout<<n-1<<' '<<n<<' '<<n-2<<endl;
        }
        else
        {
            cout<<n<<' '<<n-1<<endl;
        }

    }
}
