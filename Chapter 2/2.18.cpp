#include <iostream>
using namespace std;

int main ()
{
	int a,b;
	cout<<"Enter value of a: ";
	cin>>a;
	cout<<"Enter value of b: ";
	cin>>b;
	if(a>b){
	cout<<"B is smaller"<<"\n";
	}
	if(b>a){
		cout<<"A is smaller"<<"\n";
	}
	if(a!=b||b!=a)
	{
		cout<<"These numbers are not equal";
	}
	return 0;
	
	
}
