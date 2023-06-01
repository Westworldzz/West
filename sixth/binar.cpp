#include<iostream>
using namespace std;
class reverse{
	public:
		reverse(int a){
			aa=a;
		}
		void put(){
			int i,a[100];
			int bb=0,cc=0,j;
			for(i=0;;){
				a[i]=aa%2;
				aa=aa/2;
				if(aa==0){
					break;
				}
				i++;
			}
			for(j=i;j>=0;j--){
				bb=2*bb+a[j];
			}
			for(;;){
				cc=10*cc+bb%10;
				if(bb>=10){
				bb=bb/10;
			}
			else
			break;
			}
		for(i=0;;){
				a[i]=cc%2;
				cc=cc/2;
				if(cc==0){
					break;
				}
				i++;
			}
			for(j=i;j>=0;j--){
				cout<<a[j];
			}
		}
		private:
			int aa;
}; 
int main()
{
	int a;
	cin>>a;
	reverse r(a);
	r.put();	
}
