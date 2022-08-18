#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std;
//long long a[200010];


int main()
{
    int t;

    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        char s[n];
        int a=0,b=0;
        for(int i=0; i<n; i++)
        {
            cin >> s[i];
            if(s[i]=='a')
            {
                a++;
            }
            else
            {
                b++;
            }

        }
        for(int i=0; i<n-1; i++)
        {
            if(s[i]!=s[i+1])
            {
                cout<<i+1<<' '<<i+2<<endl;
                break;
            }

        }
        if(n==a || n==b)
            {
                cout<<-1<<' '<<-1<<endl;
            }


    }
}
