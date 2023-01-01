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
       return 0;
}
void printA()
{ 
  
  gotoxy(10, 3); 
       cout <<" ######" <<endl;
  gotoxy( 10,4); 
      cout <<"#        #" <<endl;
  gotoxy( 10 , 5); 
    cout <<"#           #"<<endl ; 
  gotoxy(10, 6);
  cout <<" #             #"<<endl ;
  gotoxy(10, 7); 
  cout <<" ###############"<<endl;
  gotoxy(10, 8); 
  cout <<"#                #"<<endl ;
  gotoxy(10, 9); 
  cout <<"#                  #"<<endl ;
  gotoxy(10, 10); 
} 
void printL()
{
 cout << "#" <<endl;
gotoxy(21, 3); 
 cout << "#" <<endl;
gotoxy(21, 4); 
 cout << "#" <<endl; 
gotoxy(21, 5);
 cout << "#" <<endl;
gotoxy(21, 6); 
 cout << "#" <<endl;
gotoxy(21, 7); 
 cout << "#" <<endl;
gotoxy(21, 8); 
 cout << "#" <<endl; 
gotoxy(21, 9);
 cout << "#" <<endl;
gotoxy(21, 10); 
 cout << " ################" <<endl; 
}
void printI()
{
gotoxy(32, 3); 
  cout << "#############" <<endl;
gotoxy(32, 4); 
         cout <<"##" <<endl; 
gotoxy(32, 5);
         cout <<"##" <<endl;
gotoxy(32, 6); 
         cout <<"##" <<endl; 
gotoxy(32, 7);
         cout <<"##" <<endl;
gotoxy(32, 8); 
         cout <<"##" <<endl;
gotoxy(32, 9); 
         cout <<"##" <<endl;
gotoxy(32, 10); 
   cout <<"##############" <<endl; 
}
void printC()
{ 
 gotoxy(43, 3); 
           cout << "######"<<endl ;
  gotoxy( 43 ,4); 
          cout << "#      #"<<endl ;
  gotoxy( 43 , 5); 
         cout << "#        #"<<endl ; 
  gotoxy(43, 6);
        cout << "#          #"<<endl ;
  gotoxy(43, 7); 
       cout << "##############"<<endl ;
  gotoxy(43,8); 
     cout << "#               #"<<endl ;
  gotoxy(43, 9); 
   cout << "#                  #"<<endl;
  gotoxy(43, 10); 
  } 
void gotoxy(int x, int y)
{ 
 COORD Coordinates;
 Coordinates.X=x;
 Coordinates.Y=y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Coordinates);
}






















