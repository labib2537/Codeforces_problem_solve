#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,c,d;
    int year;
    cin >> year;
    while(year>0)
    {
        year++;
        a = year/1000;
        b = year/100;
        b = b%10;
        c = year/10;
        c = c%10;
        d = year%10;

        if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d)
        {
            break;
        }
    }
    cout << year << endl;





    return 0;
}
