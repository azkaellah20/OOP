#include <iostream>
using namespace std;

int main ()
{
	int a,b,sum;
	cout<<"Enter value of a: ";
	cin>>a;
	cout<<"Enter value of b: ";
	cin>>b;
	sum=a+b;
	cout<<"Sum is: "<<sum<<"\n";
	if(sum%2==0)
	{
		cout<<"Sum is Even"<<"\n";
	}
	else{
		cout<<"Sum is Odd"<<"\n";
	}
	

	return 0;
	
	
}
