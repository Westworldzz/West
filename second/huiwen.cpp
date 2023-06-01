#include<iostream>
using namespace std;
class huiwen{
	public:
		huiwen(int a,int b){
			m=a;
			k=b;
		}
		void put(){
			int i,d;
			int l;
			int c; 
			int count=0;
			for(i=1;count<=k;i++){
				l=m+i;
				c=l;
				d=0;
				for(;;) {
					d=d*10+l%10;
					if(l>=10){
					l=l/10;
					}
					else
					break;
					}
			if(c==d){
			count++;	
			cout<<c<<" "; 
			}
			} 
		}
	private:
		int m;
		int k;
}; 
int main()
{
	int N;
	cin>>N;
	int a[N],b[N];
	for(int i=0;i<N;i++){
	cin>>a[i]>>b[i];
}
	for(int j=0;j<N;j++){
	huiwen o(a[j],b[j]);
	o.put();
	cout<<endl;
}
}
