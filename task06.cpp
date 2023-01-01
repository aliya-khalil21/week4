#include <iostream>
#include<windows.h>
using namespace std;
void gotoxy(int x, int y);
void printA();
void printL();
void printI();
void printC();
void move( int x,int y);
main()
{   
       system("cls");
      
       printA();
       printL();
       printI();
       printA();
       printC();
       int x= 10;
       int y= 9;
       gotoxy( x ,y+1);

}
void printA()
{ 
  
  gotoxy(10, 9); 
  cout << "         ######                    " ;
  gotoxy( 11 ,9); 
  cout << "        #      #                   " ;
  gotoxy( 12 , 9); 
  cout << "       #        #                  " ; 
  gotoxy(13, 9);
  cout << "      #          #                 " ;
  gotoxy(14, 9); 
  cout << "     ##############                " ;
  gotoxy(15, 9); 
  cout << "    #              #               " ;
  gotoxy(16, 9); 
  cout << "   #                #              " ;
  gotoxy(17, 9); 
  cout << "  #                  #             " ;
  gotoxy(18, 9); 
  cout << " #                    #            " ;
  gotoxy(19, 9); 
  cout << "#                      #           " ;
  gotoxy(20, 9);
} 
void printL()
{
 
cout << "  #                               " <<endl;
  gotoxy(10, 11); 
cout << "  #                               " <<endl;
gotoxy(11, 11); 
cout << "  #                               " <<endl; 
gotoxy(12, 11);
cout << "  #                               " <<endl;
gotoxy(13, 11); 
cout << "  #                               " <<endl;
gotoxy(14, 11); 
cout << "  #                               " <<endl;
gotoxy(15, 11); 
cout << "  #                               " <<endl; 
gotoxy(16, 11);
cout << "  #                               " <<endl;
gotoxy(17, 11); 
cout << "  ################                " <<endl;
 
}

void printI()
{
gotoxy(10, 1); 
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
void printC()
{ 
  
  gotoxy(35, 40); 
  cout << "         ######                    " ;
  gotoxy( 35 ,41); 
  cout << "        #      #                   " ;
  gotoxy( 35 , 42); 
  cout << "       #        #                  " ; 
  gotoxy(35, 43);
  cout << "      #          #                 " ;
  gotoxy(35, 44); 
  cout << "     ##############                " ;
  gotoxy(35,45); 
  cout << "    #              #               " ;
  gotoxy(35, 46); 
  cout << "   #                #              " ;
  gotoxy(35, 47); 
  cout << "  #                  #             " ;
  gotoxy(35, 48); 
  cout << " #                    #            " ;
  gotoxy(35, 49); 
  cout << "#                      #           " ;
  gotoxy(35, 50);
} 

void gotoxy(int x, int y)
{ 
 COORD Coordinates;
 Coordinates.X=x;
 Coordinates.Y=y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Coordinates);
}






















