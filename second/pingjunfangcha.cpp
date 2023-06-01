#include<iostream>
#include<stdio.h>
using namespace std;
class data{
	public:
		data(int a[]){
			int i;
			for(i=0;i<6;i++){
				b[i]=a[i];
			}
		}
		void calculate(){
			float x=0.00;
			int i;
			float s=0.00;
			for(i=0;i<6;i++){
				x=x+b[i];
			}
			x=x/6;
			for(i=0;i<6;i++){
				s=s+(b[i]-x)*(b[i]-x);
			}
			s=s/6;
			printf("%.2f %.2f",x,s);
		}
	private:
		int b[6];
}; 
int main()
{
	int N;
	int j,i;
	cin>>N;
	int a[N][6];
	for(i=0;i<N;i++){
		for(j=0;j<6;j++){
			cin>>a[i][j];
	}
	}
	for(i=0;i<N;i++){
		data d(a[i]);
		d.calculate();
		cout<<endl;
	}
	}

