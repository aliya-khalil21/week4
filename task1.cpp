#include <iostream>
using namespace std;
void product(int number1,int number2);
void subtraction(int number1,int number2);
void division(int number1,int number2);
void sum(int number1,int number2);
 main()
{
 int number1;
 int number2;
 char operation;
 cout <<"enter number1:";
 cin >>number1;
 cout <<"enter number2:";
 cin >>number2;
 sum(number1,number2);
 product(number1,number2); 
 subtraction(number1,number2);
 division(number1,number2);
 cout <<"enter operator(+,-,/,*):";
 cin operation;
 if (operation=='+');
{ sum(number1,number2);
 }
 if ( operation=='-');
{ subtraction(number1,number2);
}
 if (operation=='*');
{ product(number1,number2);
}
 if (operation=='/');
{division(number1,numbr2);
}

}
 void product(int number1,int number2)
{
 int product; 
 product=number1*number2;
 cout <<"product :"<<product<<endl;
} 
 void subtraction (int number1,int number2)
{ 
  int subtraction;
  subtraction= number1-number2;
 cout <<"subtraction :"<<subtraction <<endl;
}
 void division (int number1,int number2)
{
 int division;
 division= number1/number2;
 cout <<"division:"<<division<<endl;
} 
 void sum (int number1,number2)
{
  int sum;
  sum=number1+number2;
  cout <"sum:"<<sum<<sum<<endl;
}













