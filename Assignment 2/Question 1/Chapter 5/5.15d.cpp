#include<iostream>
#include<string>
using namespace std;
main(){
	int c=1;
	while(c<=10){
			for(int a=10; a>c; a--)
			{
			cout<<" ";
		    }
		for(int x=1; x<c; x++)
		    {
			cout<<"*";
			}
		
		
		cout<<"\n";
		c++;	
	}
}
