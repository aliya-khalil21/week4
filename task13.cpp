#include <iostream>
using namespace std;
void game();
main()
{
 game();
}
void game()
{
int totaldays=365;
int timeplayworkingdays;
int timeplayholidays;
int holidays;
int workingdays;
int timeofgame;
int tomtime=30000;
int difference;
cout << "enter holidays:" ;
cin >> holidays;
cout << "enter  timeplayholidays:" ;
cin >> timeplayholidays;
cout << "enter workingdays:" ;
cin >> workingdays;
cout << "enter timeplayworkingdays:" ;
cin >> timeplayworkingdays;
workingdays=totaldays-holidays;
timeofgame=workingdays*timeplayworkingdays+holidays*timeplayholidays;
difference=tomtime-timeofgame;
if (difference> 30000)
{
 cout <<" tom will run away";
 cout <<endl;
}
if (difference< 30000)
 {
  cout <<" tom will sleep well";
  cout <<endl;
 }

}