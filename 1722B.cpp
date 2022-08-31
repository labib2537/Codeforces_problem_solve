
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



/*

 flag condition **********
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

//int a[100000], b[100000];
const int N = 1e5+3;
typedef long long ll;
void bitwise_op()
{
    // a = 5(00000101), b = 9(00001001)
    int a = 5, b = 9;

    // The result is 00000001
    cout<<"a = " << a <<","<< " b = " << b <<endl;
    cout << "a & b = " << (a & b) << endl;

    // The result is 00001101
    cout << "a | b = " << (a | b) << endl;

    // The result is 00001100
    cout << "a ^ b = " << (a ^ b) << endl;

    // The result is 11111010
    cout << "~a = " << (~a) << endl;

    // The result is 00010010
    cout<<"b << 1" <<" = "<< (b << 1) <<endl;

    // The result is 00000100
    cout<<"b >> 1 "<<"= " << (b >> 1 )<<endl;

}

void reverseStr(string& str)
{
    int n = str.length();

    // Swap character starting from two
    // corners
    for (int i = 0; i < n / 2; i++)
        swap(str[i], str[n - i - 1]);
}


int main()
{
    int t;
    cin >> t;
    while(t--)
    {





        ll n; cin >> n;
             char s1[n],s2[n];
             ll flag=0;
             for(ll i=0;i<n;i++)
             {
                 cin >> s1[i];
             }
               for(ll i=0;i<n;i++)
             {
                 cin >> s2[i];
             }
             for(ll i=0;i<n;i++)
             {
                 if(s1[i]=='R' && s2[i]=='G' || s1[i]=='R' && s2[i]=='B' || s1[i]=='B' && s2[i]=='R' || s1[i]=='G' && s2[i]=='R')
                 {
                     flag=1;
                 }
             }
             if(flag==1)
             {
                 cout << "NO" << endl;
             }
             else
             {
                 cout << "YES" << endl;
             }

    }


}



