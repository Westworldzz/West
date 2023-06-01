#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;
class wordcompare{
	public: 
	int com(char a[],char b[]){
		len1=strlen(a);
		len2=strlen(b);
		count=0;
		flag=0;
		for(i=0;i<len2;i++){
			for(j=0;j<len1;j++){
				if(b[i+j]==a[j]){
					count++;
				}
				else{
					count=0;
					break;
				}
			}
				if(count==len1){
					flag=1;
					cout<<i<<' ';
				}
		}
		if(flag==0){
			return -1;
		}
	}
	int len1,len2,i,j,count,flag;
};
int main(){
	char a[10000]={0},b[10000]={0};
	scanf("%[^\n]",a);
	getchar();
	scanf("%[^\n]",b);
	wordcompare wc;
	wc.com(a,b);
}
 
