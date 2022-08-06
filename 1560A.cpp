#include<iostream>
#include <bits/stdc++.h>


using namespace std;


int main()
{
    int a,t,rev,rem,i;
    string k;
    cin>>t;
    while(t--)
    {
        cin >> a;

        for(i=1;i<=1666;i++)
        {
            if(i%3==0 || i%10==3)
            {
                continue;
            }
            else
            {
                a--;
            }

            if(a==0)
            {
                cout << i << endl;
            }
        }

    }

    return 0;
}
