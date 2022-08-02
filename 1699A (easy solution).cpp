#include<iostream>
using namespace std;
long long n;
int main()
{
    int t;
    cin>>t;
    for(int i=1; i<=t; i++)
    {
        cin>>n;
        if(n%2)
        {
            cout<<-1<<endl;
        }
        else
        {
            cout<<0<<' '<<n/2<<' '<<n/2<<endl;
        }
    }
}

