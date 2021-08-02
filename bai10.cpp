#include <iostream>
#include <algorithm>
#define N 1000
using namespace std;

int main(){
	int n, a[N], res;
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	sort(a,a+n);
	int count=0;
	for(int i=0; i<n; i++){
		count+=a[i];
		if(i+1<n){
			if(count+a[i+1]>4){
				res++;
				count = 0;
			} else res++;
		}
	}
		cout<<res;
		return 0;
}
