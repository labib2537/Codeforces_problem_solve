#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int n, x, y, max=-10000, min=10000;
    cin >> n;
    for(int i = 0; i<n; i++)
    {
        cin >> x;
        for(int j=0; j<x; j++)
        {
            cin >> y;
            if(j==0)
            {
                max=y;
                min=y;
            }
            if(y>max)
            {
                max = y;
            }
            if(y<min)
            {
                min = y;
            }

        }
        cout << max-min << endl;

    }



    return 0;
}
