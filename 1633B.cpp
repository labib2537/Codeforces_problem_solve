
#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;
int main( )
{
    int t,n,i,j,temp,x,y,l;
    cin >> t;
    string s;
    while(t--)
    {
        int one = 0, zero = 0;
        cin >> s;
        l = s.length();
        for(i=0; i<l; i++)
        {
            if(s[i]=='0')
            {
                zero++;
            }
            if(s[i]=='1')
            {
                one++;
            }
        }


        if(one==zero)
        {
            cout << one-1 << endl;
        }
        else
        {
            if(zero>one)
            {
                cout << one << endl;
            }
            else
            {
                cout << zero << endl;
            }
        }


    }



}






