#include<iostream>
using namespace std;

class He{
	public:
		He(int i){
			a=i;
		}
		int add(){
			b=0;
			for(;a!=0;){
				b=b+a%10;
				a=a/10;
			}
			cout<<b;;
		}
		private:
			int a;
			int b;
}; 
int main()
{
	int i;
	cin>>i;
	He number1(i);
	number1.add();
} 
