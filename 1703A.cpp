#include<iostream>
#include<cstring>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    string s;
    cin >> t;

    while(t--)
    {
        cin >> s;
        if(s=="YES" || s=="yes" || s=="Yes" || s=="yEs" || s=="yeS" || s=="YeS" || s=="YEs" || s=="yES")
        {
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }

    }



    return 0;
}
