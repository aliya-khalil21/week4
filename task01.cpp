#include <iostream>
#include<windows.h>
using namespace std;
void gotoxy(int x,int y)
{ 
 COORD Coordinates;
 Coordinates.X=x;
 Coordinates.Y=y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Coordinates);
}
 int main()
 {
  system("cls");
  cout<<"test";
  gotoxy(15,15);
  cout<<"my name is alia";
 
  return 0;
 }






















