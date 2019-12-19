#include<iostream>
using namespace std;
main(){
	int h,b,p;
	cout<<"enter the value of hypotenouse :";
	cin>>h;
	cout<<"enter the value of base:";
	cin>>b;
	cout<<"enter the value of perpendicular:";
	cin>>p;
	if(h*h==b*b+p*p){
		cout<<"It is a right angle triangle\n";
	}
	else{
			cout<<"It is not a right angle triangle\n";
		}
	}
