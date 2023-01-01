#include <iostream>
#include<windows.h>
using namespace std;
void gotoxy(int x, int y);
void printMaze();
void printp(int x, int y);
main()
{
       system("cls");
       printMaze();
       int x = 3;
       int y = 3;
       
  while(true)
  {
      printp(x,y);
      gotoxy(3,3);
      printp (3,3);
      gotoxy(3,3);
      cout<<" ";
      gotoxy(4,4);
      printp(4,4);
      gotoxy(4,4);
      cout<<" ";
      gotoxy(5,5);
      printp(5,5);
      gotoxy(5,5);
      cout<<" ";
      gotoxy(6,6);
      printp(6,6);
      gotoxy(6,6);
      cout<<" ";
      gotoxy(7,7);
      printp(7,7);
      gotoxy(7,7);
      cout<<" ";
      
        }
   
}
void printMaze()
{ 
      cout << "##################################" << endl;
      cout << "#                                #" << endl;
      cout << "#                                #" << endl;
      cout << "#                                #" << endl;
      cout << "#                                #" << endl;
      cout << "#                                #" << endl;
      cout << "#                                #" << endl;
      cout << "#                                #" << endl;
      cout << "#                                #" << endl;
      cout << "#                                #" << endl;
      cout << "##################################" << endl;


}
void gotoxy(int x, int y)
{ 
 COORD Coordinates;
 Coordinates.X=x;
 Coordinates.Y=y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Coordinates);
}
void printp(int x, int y) 
{ 
   gotoxy(x-1, y);
   cout << "   ";
   gotoxy(x, y);
   cout << "p";
   Sleep(500);
}





















