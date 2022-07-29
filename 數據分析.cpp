#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int n;
	cout<<"輸入數據數量"<<endl;
	cin>>n;

	float x[n],y[n],mux=0,muy=0,sx[n],sy[n],sxx=0,syy=0,sxy=0,r;
	for (int i=0;i<n;i++){
		cin>>x[i];
		mux=mux+x[i];
	} 
	mux=mux/n;
	for (int i=0;i<n;i++){
		cin>>y[i];
		muy=muy+y[i];
	} 
	muy=muy/n;
	for (int i=0;i<n;i++){
		sx[i]=x[i]-mux;
	} 
	for (int i=0;i<n;i++){
		sy[i]=y[i]-muy;
	} 
	for (int i=0;i<n;i++){
		sxx=sxx+(sx[i]*sx[i]);
	} 
	for (int i=0;i<n;i++){
		syy=syy+(sy[i]*sy[i]);
	} 
	for (int i=0;i<n;i++){
		sxy=sxy+(sx[i]*sy[i]);
	}
	r=sxy/(pow(sxx*syy,0.5));
	cout<<"r="<<r<<endl;
	float b= sxy/sxx;
	float c=muy-(b*mux);
	if(c>10){
	cout<<"y="<<b<<"x+"<<c;
	}else if(c==0){
	cout<<"y="<<b<<"x";
	}else{
		cout<<"y="<<b<<"x"<<c;
}}
