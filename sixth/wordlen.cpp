#include<iostream>
#include<stdio.h>
#include<cstring>
using namespace std;
class wordlen{
	public:
		void len(char a[]){
			for(i=0;a[i]!='\0';i++){
				;
			}
			count=i;
			for(j=0,k=0;k<count;j++){
				for(i=0;a[k]!=' '&&k<count;i++,k++){
					b[j][i]=a[k];
				}
				k++;
			}
			for(l=0;l<j;l++){
				cout<<strlen(b[l])<<" ";
			}
		}
		char b[100][100];
		int i,j,k,l,count;
};
int main(){
	char a[100]={0};
	scanf("%[^\n]",a);
	wordlen wl;
	wl.len(a);
}
