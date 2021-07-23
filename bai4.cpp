#include <iostream>
#include <math.h>

using namespace std;
 
int n,k,count=0,a[100001];

void Enter()
{
	cin>>n>>k;
	for (int i=1;i<=n;i++)
		cin>>a[i];
}
 
void QuickSort(int a[],int L,int H)
{
	int i=L,j=H,tam;
	int mid= a[(L+H)/2];
	while (i<j)
	{
		while (a[i]<mid) i++;
		while (a[j]>mid) j--;
		if (i<=j)
		{
		   tam=a[i];
		   a[i]=a[j];
		   a[j]=tam;
		   i++;
		   j--;	
		}
	}
	if (L<j) QuickSort(a,L,j);
	if (i<H) QuickSort(a,i,H);	
}
 
int Optimize()
{
	for (int i=1;i<n;i++)
		for (int j=i+1;j<=n;j++)
		{
			if (a[j]-a[i]==k) count++;
			if (a[j]-a[i]>k) break;
		}
	return count;
}
 
int main()
{
	Enter();
	QuickSort(a,1,n);
	cout<<Optimize();
}
