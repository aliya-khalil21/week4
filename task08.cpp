#include <iostream>
using namespace std;
void digit(int x,int y);
main()
{  
 int x;
 int y;
 while(true)
{
 cout << " enter number:"<<endl;
 cin >> x;
 cout << " enter number:"<< endl;
 cin >> y; 
 digit( x, y);
}

}
void digit(int x,int y)
{  
  
  if (x==y)
 {
  cout <<" true"<< endl;
 }
 if (x!=y)
  {
   cout << " false"<<endl;
  }
}




















