#include <iostream>
using namespace std;

int main()
{
	int n,m,k,a;
	int count=0;
	cin >> n >> m >> k;
	int x,y;
	x=n;
	y=m;
///////////////

	for (int i=0; i<=k; i++)
	{
		n=n-i;
		m=m-(k-i);
		a=n/2;
		
		if (a>m)
		{
			if (m>count)	count=m;
		}
		else
		{
			if (a>count)	count=a;
		}
		
		n=x;
		m=y;
		//printf("%d \n",count);
	}


///////////////
	cout << count;
	return 0;
}
