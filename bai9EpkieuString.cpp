#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main()
{
	ios::sync_with_stdio(0);
	string a,n;
	cin>>a>>n;
	int x = a[a.length()-1]-'0';
	int y = 10*(n[n.length()-20]-'0')+(n[n.length()-1]-'0');
	y=4+y%4;
	cout<<(int)pow(x,y)%10<<endl;
	cout<<x<<endl;
	cout<<y;
	return 0;
}
