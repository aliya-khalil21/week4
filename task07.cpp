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
       printC();
       return 0;
}
void printA()
{ 
  
  gotoxy(10, 3); 
                         cout <<"    #########   " <<endl;
  gotoxy( 10,4); 
                         cout <<"  #          #" <<endl;
  gotoxy( 10 , 5); 
                         cout <<" #            #"<<endl ; 
  gotoxy(10, 6);
                         cout <<"#              #"<<endl ;
  gotoxy(10, 7); 
                         cout <<"################"<<endl;
  gotoxy(10, 8); 
                         cout <<"#              #"<<endl ;
  gotoxy(10, 9); 
                         cout <<"#              #"<<endl ; 
  gotoxy(10, 10); 
                         cout <<"#              #"<<endl ; 
} 
void printL()
{

gotoxy(35, 3); 
                        cout << "#" <<endl;
gotoxy(35, 4); 
                        cout << "#" <<endl; 
gotoxy(35, 5);
                        cout << "#" <<endl;
gotoxy(35, 6); 
                        cout << "#" <<endl;
gotoxy(35, 7); 
                        cout << "#" <<endl;
gotoxy(35, 8); 
                        cout << "#" <<endl; 
gotoxy(35, 9);
                        cout << "#" <<endl;
gotoxy(35, 10); 
                        cout << "#################" <<endl; 
}
void printI()
{
gotoxy(60,3); 
                        cout << "#############" <<endl;
gotoxy(60, 4); 
                        cout <<"       ##     " <<endl; 
gotoxy(60, 5);
                        cout <<"       ##     " <<endl;
gotoxy(60, 6); 
                        cout <<"       ##     " <<endl; 
gotoxy(60, 7);
                        cout <<"       ##     " <<endl;
gotoxy(60, 8); 
                        cout <<"       ##     " <<endl;
gotoxy(60, 9); 
                        cout <<"       ##     " <<endl;
gotoxy(60, 10); 
                        cout <<"##############" <<endl; 
}
void printC()
{ 
  gotoxy(85, 3); 
                         cout <<"    #########   " <<endl;
  gotoxy(85,4); 
                         cout <<"  #          #" <<endl;
  gotoxy(85, 5); 
                         cout <<" #            #"<<endl ; 
  gotoxy(85, 6);
                         cout <<"#              #"<<endl ;
  gotoxy(85, 7); 
                         cout <<"################"<<endl;
  gotoxy(85, 8); 
                         cout <<"#              #"<<endl ;
  gotoxy(85, 9); 
                         cout <<"#              #"<<endl ; 
  gotoxy(85, 10); 
                         cout <<"#              #"<<endl ; 
  } 
void gotoxy(int x, int y)
{ 
 COORD Coordinates;
 Coordinates.X=x;
 Coordinates.Y=y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Coordinates);
}






















