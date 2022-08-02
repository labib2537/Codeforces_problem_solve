#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int n;
    long long m;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> m;
        if(m>0)
        {
            if(m<10)
            {
                cout << m -1 << endl;
            }
            else if(m<100)
            {
                cout << m -10 << endl;
            }
            else if(m<1000)
            {
                cout << m -100 << endl;
            }
            else if(m<10000)
            {
                cout << m -1000 << endl;
            }
            else if(m<100000)
            {
                cout << m -10000 << endl;
            }
            else if(m<1000000)
            {
                cout << m -100000 << endl;
            }
            else if(m<10000000)
            {
                cout << m -1000000 << endl;
            }
            else if(m<100000000)
            {
                cout << m -10000000 << endl;
            }
            else if(m<1000000000)
            {
                cout << m -100000000 << endl;
            }
            else if(m<10000000000)
            {
                cout << m -1000000000 << endl;
            }

        }
        else
        {
            cout << m << endl;
        }

    }


    return 0;
}
