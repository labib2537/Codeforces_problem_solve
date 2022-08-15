
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
        long n;
        cin >> n;
        string s;
        cin >> s;
        int x=0;
        for(int i=0;i<n-1;i++)
        {
            if(s[i]=='0' && s[i+1]=='0')
            {
                x+=2;
            }
            else if(s[i]=='0' && s[i+1]=='1' && s[i+2]=='0')
            {
                x++;
            }
        }
        cout << x << endl;
    }
}
