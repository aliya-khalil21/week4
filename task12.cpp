#include <iostream>
using namespace std;
void price();
main()
{
price();
}
void price()
{
int price;
int discount;
int totalprice;
 int redroseprice=2;
 int redrose;
 int totalredroseprice;
 cout << "enter redrose";
 cin >>redrose;
 totalredroseprice=redroseprice*redrose;
 
 float whiteroseprice=4.10;
 int whiterose;
 int totalwhiteroseprice;
 cout << "enter whiterose";
 cin >>whiterose;
totalwhiteroseprice=whiteroseprice*whiterose;


 float tulipsprice=2.50;
 int tulips;
 int totaltulipsprice;
 cout << "enter tulips";
 cin >>tulips;
totaltulipsprice=tulipsprice*tulips;
totalprice= totalredroseprice+totalwhiteroseprice+totaltulipsprice;
if (price > 200)
{ 

 discount= totalprice*0.2;
}
int remainingprice; 
remainingprice=totalprice-discount;
cout <<"remainingprice"<<remainingprice;
cout <<"totalprice"<<totalprice;
}




















