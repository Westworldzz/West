#include<iostream>
using namespace std;
class timetrans{
	public:
		timetrans(int a){
			t=a;
		} 
		void transform(){
			int i;
			int j;
			int a[4];
			int q=t;
			for(i=3;i>=0;i--){
				a[i]=q%10;
				q=q/10;
			}
			int p;
			p=10*a[0]+a[1];
			if(p>=8){
				a[1]=(p-8)%10;
				a[0]=(p-8)/10%10;
			}
			else{
				a[1]=(24+p-8)%10;
				a[0]=(24+p-8)/10%10;
			}
			for(i=0;i<4;i++){
				if(a[i]!=0){
					j=i;
				break;
			}
			}
			for(i=j;i<4;i++){
				cout<<a[i];
			}
		}
	private:
		int t;
}; 
int main()
{
	int a;
	cin>>a;
	timetrans o(a);
	o.transform();
}
