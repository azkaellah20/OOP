#include<iostream>
using namespace std;
int main() {
   int pass=0,fail=0,students=1,result;
	cout<<"Enter 10 different results\n\n";
   while ( students <= 10 ) {

      cout << "Enter result (1 = pass, 2 = fail): ";
      cin >> result;
      
      if ( result == 1 ) {
         pass++;
         students++;
      }
      else if ( result == 2 ) {
         fail++;
         students++;
      }
      else
         cout << "Invalid result!\n";
   }
   cout<<"Passed: " << pass <<endl; 
   cout<<"Failed: " << fail << endl;

   if ( pass > 8 )
      cout << "Bonus to instructor!" << endl;
}
