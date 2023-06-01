#include<iostream>
#include<math.h>
using namespace std;
class compute{
	public:
		compute(int a,int b){
			m=a;
			n=b;
		}
		void yue(){
			int i;
			for(i=min(m,n);i>=1;i--){
				if(m%i==0&&n%i==0){
					cout<<i<<endl;
					break;
				}
			}
		}
		void bei(){
			int t;
			for(t=max(m,n);;t++){
				if(t%m==0&&t%n==0){
					cout<<t;
					break;
				}
			}
		}
	private:
		int m;
		int n;	
}; 
int main()
{
	int a,b;
	cin>>a>>b;
	compute c(a,b);
	c.yue();
	c.bei();
}
