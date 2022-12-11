
//
//
//
//
//        **********************
//        **********************                   *
//        **********************
//        *****
//        *****
//        *****************
//        *****************     **            ***********      *****     ****    ****           **             *********       *****
//        *****************    ****           ************     *****     ****    ****          ****            **********      *****
//        *****               ******          *****    ***     *****     ****    ****         ******           ***** *****     *****
//        *****              ********         *****    ***     *****     ************        ********          *****  *****    *****
//        *****             **********        ***********      *****     ************       **********         *****   *****   *****
//        *****            ************       **********       *****     ************      ************        *****    *****  *****
//        *****           *****    *****      *****  ****      *****     ****    ****     *****    *****       *****     ***** *****
//        *****          *****      *****     *****   ****     *****     ****    ****    *****      *****      *****      **********
//        *****         *****        *****    *****    ****    *****     ****    ****   *****        *****     *****       *********
//
//
//



/*

 flag condition **********
if(flag==1)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" <<endl;
        }
*/


#include <iostream>
#include <string>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define all(x) x.begin(), x.end()
#define nl '\n'
#define dbg(...) 007
//long long a[200010];

//int a[100000], b[100000];
const int N = 1e5+3;
//const ll inf = 1e18;
typedef long long ll;
const ll inf = 1e18;
void bitwise_op()
{
    // a = 5(00000101), b = 9(00001001)
    int a = 5, b = 9;

    // The result is 00000001
    cout<<"a = " << a <<","<< " b = " << b <<endl;
    cout << "a & b = " << (a & b) << endl;

    // The result is 00001101
    cout << "a | b = " << (a | b) << endl;

    // The result is 00001100
    cout << "a ^ b = " << (a ^ b) << endl;

    // The result is 11111010
    cout << "~a = " << (~a) << endl;

    // The result is 00010010
    cout<<"b << 1" <<" = "<< (b << 1) <<endl;

    // The result is 00000100
    cout<<"b >> 1 "<<"= " << (b >> 1 )<<endl;

}

void reverseStr(string& str)
{
    int n = str.length();

    // Swap character starting from two
    // corners
    for (int i = 0; i < n / 2; i++)
        swap(str[i], str[n - i - 1]);
}

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int cmp(int a, int b)
{
    return a>b;
}
//ll a[101], c=0,n;
/*
void hex(ll a)
{
    if(a<=n)
    {
        c++;
        hex(a*10);
        hex(a*10+1);
    }
}
*/

ll b[101],n,x,t,z=0,m,o=0,k,cnt=0;
ll mx=-1e9, mn=1e9;
ll c[10];
string s1;
ll a[10001];




char upper(char ch)
{
    return 'A' + (ch-'a');
}

char lower(char ch)
{
    return 'a' + (ch-'A');
}

void solve()
{
    ll n;
    cin >> n;

    string s1;
    cin >> s1;
    ll ans=0;
    for(ll i=0; i<n; i++)
    {
        vector<ll> cnt(10);
        int d=0;
        for(ll j=i; j<min(i+228,n); j++)
        {
            auto c = s1[j]-'0';
            if(cnt[c]==0)
            {
                d++;
            }
            cnt[c]++;
            if(*max_element(all(cnt))<=d)
            {
                ans++;
            }
        }
    }
    cout << ans << endl;
}


void test()
{

    ll n, m, o;
    cin>> n >> m>> o;

    vector<ll> v(n);

    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.rbegin(), v.rend());

    auto w = [&] (ll k)
    {

        ll s = accumulate (v.begin(), v.begin() + min (k, ll(n)), 0LL);
        ll p = (o / k) * s + accumulate (v.begin(), v.begin() + min(ll(o % k), ll(n)), 0LL);

        return p >= m;

    };

    ll lo = 0, hi = inf;

    while (lo<hi)
    {

        ll mid= (lo+hi + 1) / 2;

        if (w (mid)==1) lo = mid;
        else hi = mid - 1;

    }
    cout << (lo == 0 ? "Impossible" : (lo == inf? "Infinity": to_string(lo - 1))) << nl;

}


int main()
{
    //cin >> n;
    /*while(t--)
    {
        solve();

    }*/

    /*  while(t--)
      {
          cin >> n >> m;
          if((n+1)/2<m)
          {
              cout << -1 << nl;
              continue;
          }
          for(ll i=1;i<=n;i++)
          {
              for(ll j=1;j<=n;j++)
              {

              }
          }
      }*/
    cin >> t;
    while(t--)
    {
        cin >> n;
        ll a[n];
        for(ll i=0;i<n;i++)
        {
            cin >> a[i];
        }
        sort(a, a+n);
        if(a[0]<0) cout << "NO" << endl;
        else
        {
            cout << "YES" << nl;
            cout << a[n-1]+1 << nl;
            for(ll i=0;i<=a[n-1];i++)
            {
                cout << i << " ";
            }
            cout << nl;
        }
    }

    /*    cin >> t;
        while(t--)
        {
            ll l, r, x;
            cin >> l >> r >> x;
            ll a, b;
            cin >> a >> b;
            if(a==b)
            {
                cout << 0 << nl;
                continue;
            }

                if(a>b)
                {
                    swap(a,b);
                }

                if(abs(a-b)>=x)
                {
                    cout << 1 << nl;
                }
                else if(r-b>=x || (b-l>=x && a-l>=x))
                {
                    cout << 2 << nl;
                }
                else if(r-a>=x && r-l>=x && b-l>=x)
                {
                    cout << 3 << nl;
                }
                else
                {
                    cout << -1 << nl;
                }

        }

    */






    /*
    if(a > b)
    {
        cout << ">" << endl;
    }
    else if(a<b)
    {
        cout << "<" << endl;
    }
    else
    {
        cout << "=" << endl;
    }
    */






// problem B


    /*ll a[n],b[n], s=0;
       for(ll i=0;i<n;i++)
       {
           cin >> a[i];
       }
       sort(a,a+n);
       for(ll i=1;i<n;i++)
       {
           b[i]=a[i]/a[0];
           s|=b[i];
           cout << b[i] << " ";
       }
       cout << s << endl;*/

//cout << s << endl;




    /*   for(ll i=n/2+1;i<=n;i++)
       {
           //cout << i <<

          // cout << i << " " << j << " ";
          // cout << a[i] << " " << a[j] << " ";
          ll z=1;
          for(ll j=1;j<=i/2;j++)
          {
              if(a[i]==1 && a[j]==0 || a[i]==0 && a[j]==1)
              {
                  s+=b[z]*2;
              }
              else
              {
                  s+=b[z];
              }
          }
          z++;
    */

//cout << s << endl;

    /*  ll n, k;
      cin >> n >> k;
      ll a[n], flag=0;
      for(ll i=0;i<k;i++)
      {
          cin >> a[i];
          if(n-a[i]+1==0)
          {
              flag=1;
          }
      }
      if(flag==1)
      {
          cout << "NO" << endl;
      }
      else
      {
          cout << "YES" << endl;
      }*/





    /*   else
       {
           cout << 0 << endl;
       }
    */

    /*
    string s;
    cin >> s;
    char mn='9';
    for(ll i=s.size()-1; i>=0; i--)
    {
        if(s[i]>mn)
        {
            s[i] = min((int)s[i]+1,(int)'9');
        }
        else
        {
            mn = s[i];
        }
    }
    sort(s.begin(), s.end());

    cout << s << endl;
    }
    */

}
