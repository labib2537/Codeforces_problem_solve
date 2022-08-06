#include <bits/stdc++.h>
#include<iostream>
#include <string.h>
using namespace std;

int main()
{
    int t,n;
    long long a,b,c,x,y,mx,mn,i;
    string s;
    cin >> t;

    while(t--)
    {
        int mn = 10;
        cin>>s;
        if(s.size()==2)
        {
            cout << s[1]-'0' << endl;
        }
        else
        {
            for(int i=0; i<s.size(); i++)
            {
                if(mn>s[i]-'0')
                {
                    mn = s[i]-'0';
                }

            }
            cout << mn << endl;
        }

    }

}

