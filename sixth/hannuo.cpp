#include<iostream>
using namespace std;
class hannuo{
	public:
		hannuo(int n){
			a=2*n-1;
		}
		int a;
};
int main(){
	int n;
	cin>>n;
	hannuo hn(n);
	cout<<hn.a;
}
