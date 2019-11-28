#include <iostream>
#include<string>
using namespace std;

class healthprofileclass{
private:
    string FN,LN,Gen;
    int D,M,Y;
    float height,weight;
    int yy=2019,age,hr,thr,we,he,wee;
public:
    healthprofileclass(string f,string l,string g,int d,int m,int y,float h,float w){
        FN=f;
        LN=l;
        Gen=g;
        D=d;
        M=m;
        Y=y;
        height=h;
        weight=w;
        }
    void getName(){
        cout<<"Name:"<<FN<<LN;
        }
    void setName(string a){
        a=FN;
        }
    void memfunc(){
            age=2019-Y;
            hr=220-age;
            thr=hr-70;
            he=6.2*12;
            we=(weight)*(1000/450);
        }
    void output(){
        cout<<"=========>Computerization of Health Records\n";
        memfunc();
        cout<<"Age: "<<age<<endl<<"\n";
        cout<<"Your Heart rate: "<<hr<<endl<<"\n";
        cout<<"Target Heart rate: "<<thr<<endl<<"\n";
        cout<<"Your Heigth in Foot: 5.4"<<endl<<"\n";
		cout<< "Height in Inches: "<<he<<"inches"<<endl<<"\n";
        cout<<"Your Weight in KG: 85  "<<endl<<"\n";
		cout<<"Weight in LB: "<<we<<"LB"<<endl<<"\n";
        }
};
int main()
{
    healthprofileclass a("Azka","Ellah","Female",1,12,2000,5.4,85);
    a.output();
    return 0;
}
