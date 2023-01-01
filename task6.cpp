#include <iostream>
using namespace std;
void bill(string day, int amount);
main()
{  
   int amount;
   string day;
   while(true)
 {
   cout <<"Enter day:";
   cin >>day;
   cout <<"enter amount:";
   cin >>amount;
   bill(day,amount);
 }
}
void bill(string day, int amount)
{ 
  int discount;
  int bill;
  if (day=="sunday")
 {
  discount=(amount*10)/100;
   bill=amount-discount;
   cout <<"bill" << bill <<endl;
 }

   if (day=="monday")
 {
  discount=(amount*5)/100;
   bill=amount-discount;
   cout <<"bill" << bill<<endl;
 }
  if (day=="tuesday")
 { 
  discount=(amount*5)/100;
   bill=amount-discount;
   cout <<"bill" << bill<<endl;
 }
  if (day=="wednesday");
 {
  discount=(amount*5)/100;
   bill=amount-discount;
   cout <<"bill" <<bill << endl;
 } 
  if (day=="thrusday")
 { 
  discount=(amount*5)/100;
   bill=amount-discount;
   cout <<"bill" << bill <<endl;
 }
  if (day=="friday")
 { 
   discount=(amount*5)/100;
   bill=amount-discount;
   cout <<"bill" << bill <<endl;
 }
  if (day=="saturday")
 { discount=(amount*5)/100;
   bill=amount-discount;
   cout <<"bill" << bill <<endl;
 }
}               