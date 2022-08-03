#include <bits/stdc++.h>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int t,n;
int main()
{
    int bc1,bc2;
    cin >> t;
    while(t--)
    {
        cin >> bc1 >> bc2;
        if(bc1==0)
        {
            cout << 1 << endl;
        }
        else
        {
            int pay = bc1 + (bc2*2) + 1;
            cout << pay << endl;
        }



    }
}
