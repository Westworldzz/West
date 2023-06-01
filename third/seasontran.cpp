#include<iostream>
using namespace std;
class season{
	public:
		season(int a){
			t=a;
		}
		void print(){
			switch(t) {
			case 1:cout<<"Spring";
			break;
			case 2:cout<<"Summer";
			break;
			case 3:cout<<"Fall";
			break;
			case 4:cout<<"Winter";
			break;
			default:cout<<"error";
			break;
		}
	}
	private:
		int t;
}; 
int main()
{
	int t;
	cin>>t;
	season s(t);
	s.print();
}

