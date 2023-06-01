#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
class Strstr{
	public:
		Strstr(){
			count=0;
		}
		int mystrstr(char a[],char b[]){
			int i,j;
			int k=0;
			count=strlen(b);
			for(i=0;a[i]!='\0';i++){
				for(j=0;j<count;j++){
					if(a[i+j]==b[j]){
						k++;
					}
					else{
						break;
						k=0;
					}
				}
				if(k==count){
					cout<<i;
					break;
				}
			}
			if(k==0){
				return -1;
			}
		}
		int count;
}; 
int main(){
	char a[100],b[100];
	cin>>a>>b;
	Strstr ss;
	ss.mystrstr(a,b);
}
