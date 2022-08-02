#include<iostream>
using namespace std;
int arr[26];
int main()
{
    int t,n;
    cin>>t;
    char a;
    while(t--)
    {
        cin>>n;
        int sum=0;
        for(int i=0; i<26; i++)
        {
            arr[i]=0;            //for 26 contest problems
        }
        for(int i=0; i<n; i++)
        {
            cin>>a;

            if(arr[a-'A']==0)    //for first time solve
            {
                sum=sum+2;
                arr[a-'A']=1;     //once a problem solve then the value declare as 1 for this same problem
            }
            else
            {
                sum++;
            }

        }
        cout<<sum<<endl;
    }
    return 0;
}
