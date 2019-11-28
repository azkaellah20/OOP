#include <iostream>
#include <string>
using namespace std;
class list{
  unsigned int account_number;
    string firstname,lastname;
    double balance;
public:
    list(unsigned int a,string f,string l,double b ){
        
        account_number=a;
        firstname=f;
        lastname=l;
        balance=b;
    }
    void getpart(){
        cout<<"Account Number:"<<account_number<<"\nFirst Name:"<<firstname<<"\nLast Name:"<<lastname<<"\nBalance:"<<balance<<endl;
        }
    void setpart(unsigned int a){
        account_number=a;
        }};
int main()
{
    list listt(5812,"MR","ABC",500);
    listt.getpart();
    
    
    return 0;
}
