#include <iostream>
#include <math.h>

using namespace std;

int n,k,m,count=0;
int a[1000];

void nhap(int a[], int n) {
	 for (int i = 1; i <= n; i++) {
        cout << "Nhap vao phan tu a[" << i << "] : ";
        cin >> a[i];
    }
}

int arrange(){
	for(int i=1; i<=n; i++)
		if (a[i] == n){
			k=i; break;  
			}
			while(k!=0){
				if(a[k] == m){
					count++;
					m=m-1;
				}
					k--;
			}
			return (n-count);
}
				
int main(){
    cout << "Nhap n: ";
    cin >> n;
    nhap(a, n);
    system("pause");
    m=n;
    cout<<arrange();
}
