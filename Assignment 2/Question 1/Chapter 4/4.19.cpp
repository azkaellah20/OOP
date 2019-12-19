#include<iostream>
using namespace std;
int main(){
	int a=1,b;
	int f=0,s=0;
    while(a<=10){
    		cout<<"Enter 10 different Numbers: ";
        	cin>>b;	
			
		if(f<b){
			s=f;
			f=b;
		}else if(s<b){
			s=b;
		}
        a++;
    }
        cout<<"First Maximum Number is: "<<f<<endl;
         cout<<"Second Maximum Number is: "<<s<<endl;
}
