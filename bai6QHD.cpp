#include <bits/stdc++.h>
 using namespace std;
 int q;
 int f[int(1e6 + 100)];
 
 int main(){
 	ios::sync_with_stdio(0);
 	cin.tie(0);
 	cout.tie(0);
 	
 	for(int i=1; i<=1e6; i++)
 			f[i] = 1e6 + 10;
 	for(int i=0; i<=1e6;i++){
 		f[i+4+5+10] = min(f[i+4+5+10],f[i]+3);
 		f[i+5+10] = min(f[i+5+10],f[i]+2);
 		f[i+4+1] = min(f[i+4+1],f[i]+2);
 		f[i+3] = min(f[i]+1,f[i+3]);
 		f[i+1] = min(f[i]+1,f[i+1]);
 		f[i+10] = min(f[i]+1,f[i+10]);
	 }
	 cin>>q;
	 while(q--){
	 	int x;
	 	cin>>x;
	 	cout<<f[x]<<"\n";
	 }
	 return 0;
 }
