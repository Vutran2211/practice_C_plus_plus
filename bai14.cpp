#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;

int main(){
	long long n;
	long long a[10001];
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
    sort(a,a+n);// xap xep mang theo thu tu tang dan
    int j=0;
        while(j>=0){
            long long b = j*j;
            int i;
            for(i=0;i<sizeof(a)/sizeof(a[0]);i++){
                if(b==a[i]){
                    //neu trung gia tri trong mang thi thoat
                    break;
                }
                if(b<a[i]){
                    i=sizeof(a)/sizeof(a[0]);//de so sanh o duoi
                    break;
                }
                if(b!=0 && b<=a[i]){
                	cout<<0;
                }
            }
            if(i==sizeof(a)/sizeof(a[0])){
                cout<<b;
                j=-1;//de thoat vong lap while
            }else{
                j++;//tiep tuc vong lap while
            }
        }
}
