#include <iostream>
#include <math.h>

using namespace std;
long long n, a[100005]={0};

int main(){
	long long x, k, count=0;
	cin>>n>>k;
	for(long long i=1;i<n;i++){
		cin>>x;
		if(a[x%k]==0){
			count++;
			a[x%k]=1;
			}
		}
	cout<<count;
}

