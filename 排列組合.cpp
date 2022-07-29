#include <iostream>
using namespace std;
int p(int up,int down);
int c(int up,int down);
int main()
{
	while(1){
	cout<<"輸入計算模式(p為1或是c為2)"<<endl;
	int t;
	cin>>t;
	cout<<"輸入計算模式(p為1或是c為2)"<<endl;
	int up,down;
	cin>>up>>down;
	if(t==1){
		cout<<"==========答案=========="<<endl<<p(up,down)<<endl;;
	}
	if(t==2){
		cout<<"==========答案=========="<<endl<<c(up,down)<<endl;;
	}
	cout<<"========================"<<endl;
	}
}
int p(int up,int down){
	int u=1;
	for(int a=down;a>0;a--){
		u=u*up;
		up--;
	}
	return u;
}
int c(int up,int down)
{
	int u=p(up,down);
	int d=1;
	for(int a=down;a>0;a--){
		d=d*a;
	}
	return u/d;
} 
