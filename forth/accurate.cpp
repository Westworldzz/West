#include<iostream>
using namespace std;
class accurate{
	public:
	accurate(int a,int b){
		m=a;
		n=b;
	}
	void put(){
		int c=m/n;
		int i=m%n;
		int count;
		if(i==0){
			cout<<m/n;
		}
		else{
			cout<<m/n<<".";
		for(count=0;count<=200;count++){
			if(10*i%n==0){
				cout<<10*i/n;
				break;
			}
			else{
				cout<<10*i/n;
				i=10*i%n;
			}
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
	char c;
	cin>>a>>c>>b;
	accurate o(a,b);
    o.put();
}
