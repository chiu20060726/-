#include<iostream>
using namespace std;
int main(){
	float a,b,c,x,y,n;
	cout<<"依序輸入CHO的係數"<<endl;
	cin>>a>>b>>c;
	x=a;
	y=b/2;
	n=(x*2)+y-c;
	cout<<"C"<<a<<"H"<<b<<"O"<<c<<" + "<<n<<"(O2) ==> "<<x<<"(CO2) + "<<y<<"(H2O)";
}