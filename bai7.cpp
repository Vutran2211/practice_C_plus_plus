#include <bits/stdc++.h>
#define MAX 100009
using namespace std;
int main(){
	long long a[MAX];
	long long n,x,k;
	cin>>n>>k;
	for(int i=1; i<=n; i++){
		cin>>x;
		a[i]=a[i-1]+x;
	}
	for(int i=n; i>0; i--)
		for(int j=n; j>=i; j--){
			if((a[j]-a[j-i])%k==0){
				cout<<i;
				return 0;
			}
		}
		cout<<0;
		return 0;
}

