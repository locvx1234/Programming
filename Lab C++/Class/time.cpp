#include <iostream>
using namespace std;
class Time {
private:
	int hour;
	int minus;
	int sec;
public:
	Time();
	void aTime(int ,int ,int );
	void output();
	void SetTime();
	Time operator +(Time );
};
Time::Time(){
	hour = minus = sec=0;
}
void Time::aTime(int a ,int b,int c){
	hour=a;
	minus=b;
	sec=c;
}
void Time::output(){
cout<<hour<<":"<<minus<<":"<<sec;
}
void Time::SetTime()
{
	if(sec>60) {
		minus = minus + sec/60;
		sec = sec%60;
	}
	if(minus>60) {
		hour = hour + minus/60;
		minus = minus%60;
	}

}
Time Time::operator +(Time tg)
{
	Time tmp;
	tmp.sec = (this->sec)+tg.sec;
	tmp.minus = (this->minus) + tg.minus;
	tmp.hour = (this->hour) + tg.hour;
	return tmp;
}
int main(){
	Time tg,tg2,kq;
	tg.output();
	cout<<endl;
	tg.aTime(1,2,377);
	cout<<"thoi gian 1: ";
	tg.output();
	cout <<endl;
	tg.SetTime();
	tg.output();
	cout<<endl;
	tg2.aTime(3,45,43);
	cout<<"thoi gian 2: ";
	tg2.output();
	kq = tg+tg2;
	kq.SetTime();
	cout<<"\nket qua"<<endl;
	kq.output();
}

