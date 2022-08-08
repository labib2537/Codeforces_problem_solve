#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t,i;
    string s;
    getline(cin,s);
    set<char> string_set;
    for(int i=0; i<s.length();i++)
    {

        if(islower(s[i]))
        {
            string_set.insert(s[i]);
        }

    }

    cout << string_set.size();


    return 0;
}
