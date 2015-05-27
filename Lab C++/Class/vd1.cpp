#include <iostream>
using namespace std;

class phanso{
	private:
		int tu;
		int mau;
		int ucln;
	public:
		void input();
		phanso();
		int uclnn();
		phanso operator+(phanso);
		void output();
		phanso toigian(phanso);
};
void phanso::input(){
		cout<<"tu so: ";
		cin>>tu;
		cout<<"mau so: ";
		cin>>mau;
}
phanso phanso::operator+(phanso ps){
	phanso tmp;
	tmp.tu=this->tu*ps.mau+this->mau*ps.tu;
	tmp.mau=this->mau*ps.mau;
	return tmp;
}
phanso::phanso(){
	tu=0;
	mau=1;
}
void phanso::output(){
	cout<<tu<<"/"<<mau;
}
int phanso::uclnn(){
	if(mau>=tu){
		mau=mau%tu;
	}
	else tu=tu%mau;
	ucln=tu+mau;
	return ucln;
}
phanso phanso::toigian(phanso ps){
	mau=mau/ucln;
	tu=tu/ucln;
	return ps;
}
int main(){
	phanso ps;
	phanso tmp;
	int i,n;
	phanso();
	cin>>n;
	for(i=0; i<n; i++){
		cout<<"phan so thu "<<i+1<<": ";
		ps.input();
		tmp=tmp+ps;
	}
	tmp.toigian(tmp);
	tmp.output();

}
