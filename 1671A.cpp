#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        int a=0, b=0;
        for(int i=0; i<s.length(); i++)
        {
            if(s[i]=='a')
            {
                a++;
            }
            else
            {
                b++;
            }
        }
        int flag=1;
        for(int i=0; i<s.length(); i++)
        {
            if(i==0)
            {
                if(s[i]!=s[i+1])
                {
                    flag=0;
                }
            }
            else
            {
                if(s[i]!=s[i-1] && s[i]!=s[i+1])
                {
                    flag=0;
                }
            }
        }

        if(flag==1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }




        // cout << a << " " << b << endl;
    }
}
