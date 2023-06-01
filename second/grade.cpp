#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;
class grade{
	public:
		grade(char s[],float a,float b){
			strcpy(name,s);
			x=a;
			y=b;
		}
		void put(){
			float f;
			f=0.40*x+0.60*y;
			printf("%s %.2f %.2f %.2f",name,x,y,f);
		}
	private:
		float x;
		float y; 
		char name[];
}; 
int main(){
	char name[3][100];
	float a[3],b[3];
	int i;
	for(i=0;i<3;i++){
		cin>>name[i]>>a[i]>>b[i];
	}
	for(i=0;i<3;i++){
		grade g(name[i],a[i],b[i]);
		g.put();
		cout<<endl; 
	}
}
