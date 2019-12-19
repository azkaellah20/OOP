#include<iostream>
using namespace std;
int main(){
	int a=1,b;
	int f=0,s=0,t=0;
    while(a<=10){
    		cout<<"Enter ten different numbers: ";
        	cin>>b;	
			
		if(f<b){
			t==s;
			s=f;
			f=b;
		}else if(t<b){
			t=s;
			s=b;
		}else if(s<b){
			t=b;
		}
        a++;
    }
        cout<<"First Maximum Number is: "<<f<<endl;
         cout<<"Second Maximum Number is: "<<s<<endl;
          cout<<"Third Maximum Number is: "<<t<<endl;
}

