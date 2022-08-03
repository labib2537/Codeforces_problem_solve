#include <bits/stdc++.h>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
int t,n;
int main()
{
    int a,b;
    cin >> t;

    while(t--)
    {

        cin >> a >> b;
        int t = a*a+b*b;
        int rootT = ((int)sqrt(t))*((int)sqrt(t));


        if(a==0 && b==0)
        {
            cout << 0 << endl;
        }
        else if(rootT==t)
        {
            cout << 1 << endl;
        }
        else
        {
            cout << 2 << endl;
        }



    }
}
