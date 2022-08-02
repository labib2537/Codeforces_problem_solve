#include<bits/stdc++.h>
using namespace std;

long long t,n,k;
long long a[200005];
long long ans;

int main(){
	cin>>t;
	while(t--){
		cin>>n>>k;
		ans=0;
		for(int i=1;i<=n;i++){
			cin>>a[i];
		}
		if(k==1){
			ans=(n-1)/2;

			cout<<ans<<endl;
			continue;
		}
		for(int j=2;j<n;j++){
			if(a[j-1]+a[j+1]<a[j]) ans++;
		}
		cout<<ans<<endl;
	}
	return 0;
}
