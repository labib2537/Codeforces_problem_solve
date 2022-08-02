#include <bits/stdc++.h>
#include<iostream>
#include <string.h>
using namespace std;

int main()
{
    int t,mid,c;
    string l;

    cin >> t;
    for(int j=0;j<t;j++)
    {

        cin >> l;
        map<char, int> m;
        int day=1;
        for(char ch : l)
        {
            m[ch]++;
            if(m.size()>3)
            {
                day++;
                m.clear();
                m[ch]++;
            }
        }
        cout << day << endl;


    }
    return 0;
}
