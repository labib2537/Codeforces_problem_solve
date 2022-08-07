#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t,i;
    cin >> t;
    while(t--)
    {
        int n, d;
        //cin >> n;
        string s;
        int flag=0;
        cin >> s;
        int a=0,b=0,c=0;
        int i=0;
        while(s[i]!='\0')
        {
            if(s[i]=='A')
            {
                a++;
            }
            else if(s[i]=='B')
            {
                b++;
            }
            else
            {
                c++;
            }
            i++;
        }



        if(b==(a+c))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }






    }


    return 0;
}
