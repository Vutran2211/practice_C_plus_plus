#include <iostream>
#include <string.h>
#include <math.h>

using namespace std;

long long memo[400][400];
long long n, m;
long long c[100];

long long qhd(long long n, long long m){
	if (n==0) return 1;
	if (n<0) return 0;
	if (n>=1 && m<=0) return 0;
	if (memo[n][m] !=-1) return memo[n][m];
	return memo[n][m]=qhd(n, m-1) + qhd(n-c[m],m);
}

int main(){
	ios::sync_with_stdio(false);
	cin>>n>>m;
	memset(memo,-1,sizeof(memo));
	for (long long i=1; i<=m;i++){
		cin>>c[i];
	}
	cout<<qhd(n,m);
	return 0;
}
