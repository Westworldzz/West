#include<iostream>
using namespace std;
class pow{
	public:
		pow(int a,int n){
			aa=a;
			nn=n;
		}
		void put(){
			int i;
			int b=aa;
			for(i=1;i<nn;i++){
				aa=aa*b;
			}
			cout<<aa;
		}
	private:
		int aa;
		int nn;
};
int main()
{
	int a,n;
	cin>>a>>n;
	pow p(a,n);
	p.put();
}
