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
        map<char, int> m;
        for(int i=0;i<s.length();i++)
        {
            m[s[i]]=i;
        }
        if(m['r']<m['R'] && m['g']<m['G'] && m['b']<m['B'])
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }



    }
}
