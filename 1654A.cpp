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

using namespace std;
//long long a[200010];


int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,x;
        cin >> n;
        int a[n],c=0,s=0,res;
        for(int i=0;i<n;i++)
        {
            cin >> a[i];
        }
        sort(a,a+n);
        for(int i=0;i<n;i++)
        {
            res = a[n-1]+a[n-2];
        }
        cout << res << endl;
    }

    return 0;
}