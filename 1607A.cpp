#include<iostream>
//include <bits/stdc++.h>


using namespace std;


int main()
{
    int a,b,sum,t;
    string k,s;
    cin>>t;
    while(t--)
    {
        cin >> k;
        cin >> s;
        sum=0;
        for(int i=0;i<s.length()-1;i++)
        {
            a = k.find(s[i]);
            b = k.find(s[i+1]);
            sum = sum + abs(a-b);
        }
        cout << sum << endl;


    }

    return 0;
}
