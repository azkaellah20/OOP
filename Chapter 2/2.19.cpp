#include <iostream>
using namespace std;

int main ()
{
	int a,b,c;
	int sum,avg,product;
	cout<<"Enter value of a: ";
	cin>>a;
	cout<<"Enter value of b: ";
	cin>>b;
	cout<<"Enter value of c: ";
	cin>>c;
	sum=a+b+c;
	avg=a+b+c/3;
	product=a*b*c;
	cout<<"Sum is "<<sum<<"\n";
	cout<<"Average is "<<avg<<"\n";
	cout<<"Product is "<<product<<"\n";
	if(a>b&&a>c)
	{
		cout<<"Largest is "<<a<<"\n";
	}
	if(b>a&&b>c)
	{
		cout<<"Largest is "<<b<<"\n";
	}
	if(c>a&&c>b)
	{
		cout<<"Largest is "<<c<<"\n";
	}
	
	if(a<b&&a<c)
	{
		cout<<"Smallest is "<<a<<"\n";
	}
	if(b<a&&b<c)
	{
		cout<<"Smallest is "<<b<<"\n";
	}
	if(c<a&&c<b)
	{
		cout<<"Smallest is "<<c<<"\n";
	}

	return 0;
	
	
}
