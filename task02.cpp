#include <iostream>
#include<windows.h>
using namespace std;
void gotoxy(int, int );
void printMaze();
main()
{
       system("cls");
       printMaze();
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
 






















