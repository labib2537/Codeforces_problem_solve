#include <bits/stdc++.h>
#include<string>
using namespace std;
int t,n;
int main()
{
    int H,M,h,m,looplimit;
    cin >> t;
    while(t--)
    {
       cin >> n;
       looplimit=9;
       while(n>looplimit)
       {
           n = n - looplimit;
           looplimit--;
       }
       cout << n;
       for(int i=looplimit+1;i<=9;i++)
       {
           cout << i;
       }
       cout << endl;

    }
}
