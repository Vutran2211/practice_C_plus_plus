#include <iostream>
#include <math.h>

using namespace std;

int main(){
	int n,k;
	cin>>n>>k;
	long long a[n];
	for(int i=1; i<=n; ++i)
	cin>>a[i];
	
	int i=n,count=-1;
	for(int i=1; i<=n; i++){
	 	if(a[i]%k != a[i+1]%k){
	 		count++;
		 	}
		if(a[i]%k == a[i+1]%k){
			count = 0;
			}
	 	}
	cout<<count;
	return 0;
}

