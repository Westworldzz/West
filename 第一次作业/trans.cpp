#include<iostream>
using namespace std;
class Trans{
	public:
		Trans(int a,int b){
			aa=a;
			bb=b;
		}
		void tran(){
			int i,a[100];
			for(i=0;;){
				a[i]=aa%bb;
				aa=aa/bb;
				if(aa==0){
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
	int aa;
	int bb;		
};
int main()
{
	int N,k;
	cin>>N;
	for(k=0;k<N;k++){
		int a,b;
		cin>>a>>b;
		Trans t(a,b);
		t.tran();
		cout<<endl;
	}
}
