
#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;
int main( )
{
    int t,n,i,j,temp,x,y;


    char s[100],r[100];
    cin >> t;
    while(t--)
    {
        cin >>n;
        for(int i=0;i<n;i++)
        {
            cin >> s[i];
        }



        if(n==1 || (n==2 && s[0]!=s[1]))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }

        }


    }






