#include <iostream>
using namespace std;

int main ()
{
	int a,b,c,d,e;
	cout<<"Enter value of a: ";
	cin>>a;
	cout<<"Enter value of b: ";
	cin>>b;
	cout<<"Enter value of c: ";
	cin>>c;
	cout<<"Enter value of d: ";
	cin>>d;
	cout<<"Enter value of e: ";
	cin>>e;
		if(a>b&&a>c&&a>d&&a>e)
	{
		cout<<"Largest is "<<a<<"\n";
	}
	if(b>a&&b>c&&b>d&&b>e)
	{
		cout<<"Largest is "<<b<<"\n";
	}
	if(c>a&&c>b&&c>d&&c>e)
	{
		cout<<"Largest is "<<c<<"\n";
	}
	if(d>a&&d>b&&d>c&&d>e)
	{
		cout<<"Largest is "<<d<<"\n";
	}
	if(e>a&&e>b&&e>d&&e>c)
	{
		cout<<"Largest is "<<e<<"\n";
	}
	
	
	if(a<b&&a<c&&a<d&&a<e)
	{
		cout<<"Smallest is "<<a<<"\n";
	}
	if(b<a&&b<c&&b<d&&b<e)
	{
		cout<<"Smallest is "<<b<<"\n";
	}
	if(c<a&&c<b&&c<d&&c<e)
	{
		cout<<"Smallest is "<<c<<"\n";
	}
	if(d<a&&d<b&&d<c&&d<e)
	{
		cout<<"Smallest is "<<d<<"\n";
	}
	if(e<a&&e<b&&e<d&&e<c)
	{
		cout<<"Smallest is "<<e<<"\n";
	}



	return 0;
	
	
}
