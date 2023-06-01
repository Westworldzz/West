#include<iostream>
using namespace std; 
class date{
	public:
		date(int y,int m,int d){
			year=y;
			month=m;
			day=d;
		}
		int year_alldays()
{
    if(year%400==0&&year%4==0||year%400!=0&&year%4==0){
	 return 366;
	 }
	 else{ 
	 return 365;
	}
}
int year_sumday()
{
    int sum=0;
    int run[12]={31,29,31,30,31,30,31,31,30,31,30,31};
    int ping[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    int flag=0;
    if(year%400==0&&year%4==0||year%400!=0&&year%4==0) {
    	flag=1;
    }
    for(int i=0;i<month-1;i++)
    {
        if(flag==1){
        	sum=sum+run[i];
        }
		else {
			sum=sum+ping[i];
		}
    }
    return sum;
}//某一年到某一月之前一共多少天 
int alldays() 
{
    int i=1900,days=0;
    while(i<year)
    {
        days=days+year_alldays();
        i++;
    }//计算到某一年之前一共的天数 
      int days2=year_sumday();
    return days+days2+day;
}//计算从1900/01/01到指定日期的天数 
	private:
	int year;
	int month;
	int day;	
}; 
int main()
{
	int a,b,c;
	int days1;
	char s[100]; 
	cin>>s;
	a=1000*(s[0]-48)+100*(s[1]-48)+10*(s[2]-48)+s[3]-48;
	if(s[5]=='0'){
		b=s[6]-48;
	}
	else{
		b=(s[5]-48)*10+s[6]-48;
	}
	if(s[8]=='0'){
		c=s[9]-48;
	}
	else{
		c=(s[8]-48)*10+s[9]-48;
}
	date d(a,b,c);
	days1=d.alldays();
	if(days1%7==6){
		cout<<"Sunday";}
	if(days1%7==0){
		cout<<"Monday";
	}if(days1%7==1){
		cout<<"Tuesday";
	}if(days1%7==2){
		cout<<"Wednesday";
	}if(days1%7==3){
		cout<<"Thursday";
	}if(days1%7==4){
		cout<<"Friday";
	}if(days1%7==5){
		cout<<"Saturday";
	}
}
