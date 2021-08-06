#include <iostream>
#include <string.h>
#include <stdio.h>
#include <cstring>
#include <string>
#define MAX 100
using namespace std;
	
int main(){
		string chuoi;  cin>>chuoi; //nhap mang ky tu
        string check = "YES";
        int mang[MAX];
        char arr[]= {'h','e','l','l','o'};
        char brr[chuoi.size()+1]; // convert string to array
        strcpy(brr, chuoi.c_str()); //convert string to array
        int bien = 0;
        for(int i=0;i<sizeof(arr) / sizeof(arr[0]);i++){
            char a = arr[i];

            for(int j=bien;j<sizeof(brr) / sizeof(brr[0]);j++){
                char b = brr[j];
                if(a==b && i==0){
                    mang[i]=j;
                    bien =j;
                    check="YES";
                    break;
                }else {
                if(a==b && j>mang[i-1]  ){
                    check="YES";
                    bien=j;
                   mang[i]=j;
                    break;   
                } 
                }
                if(j==sizeof(brr) / sizeof(brr[0])-1){

                    bien = j;
                }
            }
            if(bien==sizeof(brr) / sizeof(brr[0])-1 && i<sizeof(arr) / sizeof(arr[0])-1){

                check="NO";
                break;
            }
         } cout<<check;
         return 0;
    }

