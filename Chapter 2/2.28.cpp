#include <iostream>
using namespace std;

int main ()
{
	int a,reversedNumber,remainder;
	cout<<"Enter 4 digits value of a: ";
	cin>>a;
	cout<<a/1000<<"   ";;
	a=a%1000;
	cout<<a/100<<"   ";;
	a=a %100;
	cout<<a/10<<"   ";;
	a=a%10;
	cout<<a/1<<"   ";;
	a=a%1;
	
	while(a != 0)
    {
        remainder = a%1000;
        reversedNumber = reversedNumber*10 + remainder;
        a /= 1000;
    }
	cout<<"\n"<<reversedNumber;
	return 0;
	
	
}
