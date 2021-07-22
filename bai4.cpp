#include <iostream>
#include <math.h>

using namespace std;

int main(){
	int n,k;
	cin>>n>>k;
	long long a[n];
	for(int i=1; i<=n; ++i)
	cin>>a[i];
	
	int count=0;
	for (int i=1;i<n;i++)
		for (int j=i+1;j<=n;j++)
		{
			if (a[j]-a[i]==k) count++;
			if (a[j]-a[i]>k) break;
		}
		return 0;
	}
