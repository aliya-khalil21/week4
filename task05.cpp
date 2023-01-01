#include <iostream>
#include<windows.h>
using namespace std;
void gotoxy(int x, int y);
void printA();
void printL();
void printI();
void move( int x,int y);
main()
{   
       system("cls");
      
       printA();
       printL();
       printI();
       printA();
       int x= 35;
       int y= 9;
       gotoxy( x ,y+1);

}
void printA(int x, int y )
{ 
  
  gotoxy(35, 9); 
  cout << "         ######                    " ;
  gotoxy( 35 ,10); 
  cout << "        #      #                   " ;
  gotoxy( 35 , 11); 
  cout << "       #        #                  " ; 
  gotoxy(35, 12);
  cout << "      #          #                 " ;
  gotoxy(35, 13); 
  cout << "     ##############                " ;
  gotoxy(35, 14); 
  cout << "    #              #               " ;
  gotoxy(35, 15); 
  cout << "   #                #              " ;
  gotoxy(35, 16); 
  cout << "  #                  #             " ;
  gotoxy(35, 17); 
  cout << " #                    #            " ;
  gotoxy(35, 18); 
  cout << "#                      #           " ;
  gotoxy(35, 19);
} 
void printL()
{
 
cout << "  #                               " <<endl;
  gotoxy(35, 21); 
cout << "  #                               " <<endl;
gotoxy(35, 22); 
cout << "  #                               " <<endl; 
gotoxy(35, 23);
cout << "  #                               " <<endl;
gotoxy(35, 24); 
cout << "  #                               " <<endl;
gotoxy(35, 25); 
cout << "  #                               " <<endl;
gotoxy(35, 26); 
cout << "  #                               " <<endl; 
gotoxy(35, 27);
cout << "  #                               " <<endl;
gotoxy(35, 28); 
cout << "  ################                " <<endl;
 
}

void printI()
{
gotoxy(35, 30); 
cout << "   #############                    " <<endl;
gotoxy(35, 31); 
cout << "        ##                         " <<endl; 
gotoxy(35, 32);
cout << "        ##                         " <<endl;
gotoxy(35, 33); 
cout << "        ##                        " <<endl; 
gotoxy(35, 34);
cout << "        ##                        " <<endl;
gotoxy(35, 35); 
cout << "        ##                         " <<endl;
gotoxy(35, 36); 
cout << "        ##                         " <<endl;
gotoxy(35, 37);
cout << "        ##                         " <<endl;

gotoxy(35, 38); 
cout << "   ##############                            " <<endl; 
}

void gotoxy(int x, int y)
{ 
 COORD Coordinates;
 Coordinates.X=x;
 Coordinates.Y=y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Coordinates);
}






















