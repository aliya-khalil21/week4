#include <iostream>
using namespace std;
void challan();
main()
{
 challan();
}
void challan()
{
 int speed;
 cout <<"enter speed:";
 cin>>speed;
 if(speed > 100)
 {
  cout <<"HALT... YOU ARE OVERSPEEDING.";
 }
 if(speed < 100)
 {
  cout<<"PERFECT .. YOU ARE GOOD.";
 }
}  