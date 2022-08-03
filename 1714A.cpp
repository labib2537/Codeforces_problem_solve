#include <bits/stdc++.h>
#include<string>
using namespace std;
int t,n;
int main()
{
    int H,M,h,m;
    cin >> t;
    while(t--)
    {
        cin >> n >> H >> M;
        int nextAlarm,rem,answer=1440;
        int sleepTime = H*60+M;
        for(int i=0;i<n;i++)
        {
            cin >> h >> m;
            nextAlarm = h*60+m;

           rem = (nextAlarm - sleepTime + (24*60));   // for 24 hours format
           rem = rem%(24*60);
           answer = min(answer,rem);
        }
        cout << answer/60 << " " << answer%60 << endl;


    }
}

