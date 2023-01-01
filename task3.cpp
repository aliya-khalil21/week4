#include <iostream>
using namespace std;
void even(int number1);
main()
{
 int number1;
  while (true)
 { 
  cout << "enter number1:";
  cin >> number1;
  even( number1); 
  }
}
 void even(int number1)
{
   if (number1%2==0)
 {
   cout <<"number is even:" <<endl;
 }
   if (number1%2!=0)
 { 
    cout <<" number is odd:" <<endl;
 }
}