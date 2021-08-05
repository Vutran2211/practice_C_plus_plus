#include <iostream>
#include <string.h>
#include <stdio.h>
#include <cstring>
#define MAX 100
using namespace std;
	
int main(){
	char str1[MAX] = "hello";
	char str2[MAX];
	cin>>str2;
	if(strcmp(str1, str2) == 0)	{
	cout << "yes" << endl;		
	}
	else{
	cout << "no" << endl;
	}
}

