
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
        int n,m,rb,cb,rd,cd;
        cin >> n >> m >> rb >> cb >> rd >> cd;
        int x,y;
        if(rb<=rd)
        {
            x = rd - rb;
        }else{
            x = rb - rd + (n-rb)*2;
        }


        if(cb<=cd)
        {
            y = cd - cb;
        }else{
            y = cb - cd + (m-cb)*2;
        }



        cout << min(x,y) << endl;



    }
}
