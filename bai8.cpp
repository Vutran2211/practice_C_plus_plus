#include <iostream>
using namespace std;
int main(){
	ios::sync_with_stdio(0);
	long long n;
	cin>>n;
	long long a[n];
	for(long long i=1; i<=n; i++){
		cin>>a[i];
	}
	long long f[n];
	f[0]=-1e9;
	long long res=-1e9;
	for(long long i=1; i<=n; i++){
		f[i]=max(f[i-1]+a[i], a[i]);
		res=max(res,f[i]);
	}
	cout<<res;
	return 0;
}
