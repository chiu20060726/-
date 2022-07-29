#include <iostream>
#include <cmath>
using namespace std;
float a(float in);
int main()
{
	while(1){
	float ina;
	int type;
	cout<<endl<<"輸入模式(sin為1 cos為2 tan為3 cot為4 sec為5 csc為6)";
	cin>>type;
	cout<<"輸入角度"<<endl;
	cin>>ina;
	if(type==1){
		float n= a (ina);
		cout<<sin(n);
		}
	if(type==2){
		float n= a (ina);
		cout<<cos(n);
		}
	if(type==3){
		float n= a (ina);
		cout<<tan(n);
		}
	if(type==4){
		float n= a (ina);
		cout<<1/tan(n);
		}
	if(type==5){
		float n= a (ina);
		cout<<1/cos(n);
		}
	if(type==6){
		float n= a (ina);
		cout<<1/sin(n);
		}
	}
	}
float a(float in)
{
	float pi=3.1415926;
	float s=pi/180;
	return s*in;
	}