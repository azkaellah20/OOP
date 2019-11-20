#include <iostream>
using namespace std;

int main ()
{
	int a,b,c;
	cout<<"Enter value of a: ";
	cin>>a;
	cout<<"Enter value of b: ";
	cin>>b;
	cout<<"Enter value of c: ";
	cin>>c;
	if(a%c==0&&b%c==0)
	{
	 cout<<"A and B are factors of C"<<"\n";
	}
	else
	cout<<"A and B are not factors of C";
	return 0;
	
	
}
