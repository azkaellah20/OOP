#include<iostream>
#include<string>
using namespace std;
main(){
	int c=1;
	while(c<=10){
			for(int a=1; a<c; a++){
			cout<<" ";
		}
		for(int x=10; x>c; x--){
			cout<<"*";
			}
		
		
		cout<<"\n";
		c++;	
	}
}
