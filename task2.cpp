#include <iostream>
using namespace std;
void isEligible(int age);
main()
{
int age;
 while(true) 
 {
   cout <<"enter your age:";
   cin >> age;
  isEligible( age); 
 }
}
  void isEligible(int age)
{ 
 if(age>=18) 
  {
    cout <<"Eligible" <<endl;
  }
if (age <18) 
   {
  cout <<" not eligible" << endl; 
   }
}


















