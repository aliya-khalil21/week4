#include <iostream>
#include <windows.h>
using namespace std;
void gotoxy(int x, int y);
void pacman();
void printp(int x,int y);
main()
{

 system("cls");   
 pacman();
 while(true)
{ 
  int x= 10;
  int y= 10;
  printp(x,y);
  gotoxy(10,10);
  cout <<" ";
 
  gotoxy(11,10);
 printp(11,10);
 gotoxy(11,10);
 cout<<" ";

  gotoxy(12,10);
 printp(12,10);
 gotoxy(12,10);
 cout<<" ";
  gotoxy(13,10);
 printp(13,10);
 gotoxy(13,10);
 cout<<" ";
  gotoxy(14,10);
 printp(14,10);
 gotoxy(14,10);
 cout<<" ";
  gotoxy(15,10);
 printp(15,10);
 gotoxy(15,10);
 cout<<" ";

 }
}
void pacman()
{
cout <<"     #####################################################################                             "<< endl;
cout <<"     ||.. ...................................................   ......  ||         "<< endl;
cout <<"     ||.. %%%%%%%%%%%%%%%%%       ...     %%%%%%%%%%%%  |%|..    %%%%   ||                   "<< endl;
cout <<"     ||..          |%|  |%|     |%|...     |%|      |%| |%|..      |%|  ||                "<< endl;
cout <<"     ||..          |%|  |%|     |%|...     |%|      |%| |%|..      |%|  ||                "<< endl;
cout <<"     ||..           %%%%%%%  . .|%|...     %%%%%%%%%%%%    ..     %%%%. ||                   "<< endl;
cout <<"     ||..          |%|       . .|%|...     ............|%| ..         . ||      "<< endl;
cout <<"     ||..          %%%%%%%%%%. .|%|...     %%%%%%%%%   |%| ..     %%%%. ||      "<< endl;
cout <<"     ||..                 |%|.             |%|.....    |%| ..      |%|. ||      "<< endl;
cout <<"     ||..       ......... |%|.        p    |%|.....|%|     ..      |%|. ||        "<< endl;
cout <<"     ||..|%|    |%|%%%|%|.|%|. |%|            .....|%|     ..|%|   |%|. ||   "<< endl;
cout <<"     ||..|%|    |%|   |%|..    %%%%%%%%%%%%   .....|%|      .|%|.       ||  "<< endl;
cout <<"     ||..|%|    |%|   |%|..           ...|%|    %%%%%%      .|%|.       || "<< endl;
cout <<"     ||..|%|             .            ...|%|            |%|..|%|.       ||"<< endl;
cout <<"     ||..|%|  %%%%%%%%%%%%%%%         ...|%|%%%%%%%%    |%|..|%|%%%%%%% ||             "<< endl;
cout <<"     ||..............................................   |%|............ ||   "<< endl;
cout <<"     ||   ...........................................         ......... || "<< endl;
cout <<"     ||..|%|   |%|   |%|..     %%%%%%%%%%%  ....|%|     |%| ..|%|.      ||                                                   "<< endl;
cout <<"     ||..|%|   |%|   |%|..           ...|%|   %%%%%     |%| ..|%|.      ||                                                                 "<< endl;
cout <<"     ||..|%|             .     G     ...|%|             |%| ..|%|.      ||                                                                      "<< endl;
cout <<"     ||..|%|   %%%%%%%%%%%%%         ...|%|%%%%%%%%     |%| ..|%|%%%%   ||                                                                    "<< endl;
cout <<"     ||...............................................  |%| .........   ||              "<< endl;
cout <<"     ||  .............................................        .......   ||                                                        "<< endl;
cout <<"     #####################################################################                                 "<< endl;
}
void printp(int x,int y)
{
 gotoxy(x-1,y);
 cout <<" ";
 gotoxy(x,y);
 cout <<"p"; 
 Sleep(500);
}
void gotoxy(int x , int y)
{
 COORD coordinates;
 coordinates.X = x;
 coordinates.Y= y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}






