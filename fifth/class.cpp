#include<iostream>
using namespace std;
class cancel{
	public:
	    cancel(){
	    	count=0;
	    }
		int IsCancel(int a[],int n,int k){
			int i;
			for(i=0;i<n;i++){
				if(a[i]<0){
					count++;
				}
			}
			if(count>k){
				return 1;
			}
			else{
				return 0;
			}
		}
		private:
			int count;
};
int main(){
	int n,k,i;
	cin>>n>>k;
	int a[n];
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	cancel c;
	if(c.IsCancel(a,n,k)==1){
		cout<<"yes";
	}
	else{
		cout<<"no";
	}
}
