#include<iostream>
using namespace std;
class Oct{
	public:
	 Oct(int n){
			num=n;
		}
		void trans(){
			int i=0;
			int a[100];
			for(;;){
				a[i]=num%8;
				num=num/8;
				if(num==0){
					break;
				}
				i++;
			}
			int j;
			for(j=i;j>=0;j--){
				cout<<a[j];
			}
		} 
	private:
	int num;	
};
int main(){
	int a;
	cin>>a;
	Oct o(a);
	o.trans();
}
