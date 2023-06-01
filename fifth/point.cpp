#include<iostream>
using namespace std;
class  pointsort{
	public:
		pointsort(){
			b=0;
		}
		void sort(int num[],int n){
		int i;
		int j;
		for(i=0;i<n;i++){
		for(j=1;j<=n-1-i;j++){
			if(num[j-1]>num[j]){
				b=num[j-1];
				num[j-1]=num[j];
				num[j]=b;
		}
	}
}
		for(i=0;i<n;i++){
			cout<<num[i]<<" ";
		}
	}
	private:
		int b;
};
int main(){
	int n;
	cin>>n;
	int num[n];
	for(int i=0;i<n;i++){
		cin>>num[i];
	}
	pointsort a;
	a.sort(num,n);
}
