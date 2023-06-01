#include<iostream>
using namespace std;
class circle{
	public:
		circle(int a){
			r=a;
		}
		void put(){
			int d;
			double c,s;
			d=r*2;
			c=d*3.14;
			s=r*r*3.14;
			cout<<"直径="<<d<<endl;
			cout<<"周长="<<c<<endl;
			cout<<"面积="<<s<<endl; 
		}
	private:
		int r;	
};
int main()
{
	int r;
	cin>>r;
	circle o(r);
	o.put(); 
}
