#include <bits/stdc++.h>
#include<iostream>
#include <string.h>
using namespace std;

int main()
{
    int t,mid,c;
    string l;

    cin >> t;
    for(int j=0;j<t;j++)
    {

        cin >> l;
        mid = l.length()/2;
        c = 0;

        if(l.length()==1)
        {
            cout << "No" << endl;
        }
        else if(l.length()%2==0)
        {
            for(int i=0;i<mid;i++)
            {
                if(l.at(i)==l.at(mid+i))
                {
                    c++;
                }
            }

            if(c==mid)
            {
                cout << "YES" << endl;
            }
            else{

                cout << "NO" << endl;
            }
        }
        else
        {
            cout << "NO" << endl;
        }


    }
    return 0;
}
