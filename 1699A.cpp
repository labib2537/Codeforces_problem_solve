#include<iostream>
#include<string>

using namespace std;

int main()
{
	int t;cin>>t;
	while(t--){
		long long n;cin>>n;
		if(n&1){
			cout<<-1<<endl;
			continue;
		}

		n=n>>1;

		if(n&1){
			cout<<1<<" "<<1<<" "<<n-1<<endl;
			continue;
		}
		else{
			cout<<1<<" "<<1<<" "<<n+1<<endl;
			continue;
		}

	}


	return 0;
}
