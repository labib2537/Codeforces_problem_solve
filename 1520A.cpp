//
//
//
//
//        **********************
//        **********************                   *
//        **********************
//        *****
//        *****
//        *****************
//        *****************     **            ***********      *****     ****    ****           **             *********       *****
//        *****************    ****           ************     *****     ****    ****          ****            **********      *****
//        *****               ******          *****    ***     *****     ****    ****         ******           ***** *****     *****
//        *****              ********         *****    ***     *****     ************        ********          *****  *****    *****
//        *****             **********        ***********      *****     ************       **********         *****   *****   *****
//        *****            ************       **********       *****     ************      ************        *****    *****  *****
//        *****           *****    *****      *****  ****      *****     ****    ****     *****    *****       *****     ***** *****
//        *****          *****      *****     *****   ****     *****     ****    ****    *****      *****      *****      **********
//        *****         *****        *****    *****    ****    *****     ****    ****   *****        *****     *****       *********
//
//
//



/* flag condition **********
if(flag==1)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" <<endl;
        }
*/


#include <iostream>
#include <string>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
//long long a[200010];


int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        string s;
        int flag=0;
        cin >> s;
        for(int i=0; i<s.size(); i++)
        {
            for(int j=i+1; j<s.size(); j++)
            {
                for(int k=i+1; k<j; k++)
                {
                    if(s[i]==s[j] && s[i]!=s[k])
                    {
                        flag=1;
                    }
                }
            }

        }
        if(flag==1)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" <<endl;
        }


    }

    return 0;
}
