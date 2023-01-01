#include <iostream>
using namespace std;
void airline();
main()
{
while(true)
 {
 airline();
 }
}
void airline()
{
string country;
float discount;
int ticketprice;
float total;
cout << "enter country:";
cin >> country;
cout << " enter ticketprice:";
cin >> ticketprice;
if (country=="pakistan")
{
 discount=(ticketprice*50)/100;
 total= ticketprice-discount;
 cout <<"total"<<total;
} 
if (country=="ireland")
{
 discount=(ticketprice*10)/100;
 total= ticketprice-discount;
 cout <<"total"<<total;
} 
if (country=="india")
{
 discount=(ticketprice*20)/100;
 total= ticketprice-discount;
 cout <<"total"<<total;
} 
if (country=="england")
{
 discount=(ticketprice*30)/100;
 total= ticketprice-discount;
 cout <<"total"<<total;
} 
if (country=="canda")
{
 discount=(ticketprice*45)/100;
 total= ticketprice-discount;
 cout <<"total"<<total;
} 
}