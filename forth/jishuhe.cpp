#include<iostream>
using namespace std;
class evenadd{
	public:
		evenadd(int a){
			n=a;
		}
		int even(){
			if(n%2==1){
				return 1;
			}
			else{
				return 0;
			}
		}
	private:
		int n;
}; 
int main()
{
	   int a[100];
	   int i;
	   int he=0;
	   for(i=0;;i++){
	   	cin>>a[i];
	   	if(a[i]==0||a[i]<0){
	   		break;
	   	}
	   }  
	   for(i=0;a[i]>0;i++){
	   	evenadd number(a[i]);
	   	if(number.even()==1){
	   		he=he+a[i];
	   	}
	   } 
	   cout<<he;   
}
