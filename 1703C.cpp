#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std;

int main()
{
int t;
cin >> t;
while(t--)
{
    int w;
    cin >> w;
    int r[w];
    for(int i=0;i<w;i++)
    {
        cin >> r[i];
    }

    for(int i=0;i<w;i++)
    {
        int x;
        cin >> x;
        string s;
        cin >> s;
        for(int j=0;j<x;j++)
        {
            if(s[j]=='U')
            {
                if(r[i]==0)
                {
                    r[i]=9;
                }
                else
                {
                    r[i]--;
                }
            }
            else if(s[j]=='D')
            {
                if(r[i]==9)
                {
                    r[i]=0;
                }
                else
                {
                    r[i]++;
                }
            }
        }
    }

    for(int i=0;i<w;i++)
    {
        cout << r[i] << " ";
    }
    cout << endl;

}



}
