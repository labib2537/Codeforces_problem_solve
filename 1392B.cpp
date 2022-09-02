
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
        ll n,x,in;
        cin >> n >> x;
        ll mx = -1e9,a[n];
        for(ll i=0;i<n;i++)
        {
            cin >> a[i];
        }

        //find max from array
        for(ll i=0;i<n;i++)
        {
            if(a[i]>mx)
            {
                mx = a[i];
            }
        }
        //subtract all array elements from max
        for(ll i=0;i<n;i++)
        {
            a[i] = mx-a[i];
        }

        //find max again from updated array after performing subtract operation
        mx = -1e9;
        for(ll i=0;i<n;i++)
        {
            if(a[i]>mx)
            {
                mx = a[i];
            }
        }

        if(x%2==0)
        {
            for(ll i=0;i<n;i++)
            {
                a[i] = mx-a[i];
            }
        }



        for(ll i=0;i<n;i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;



    }

}



