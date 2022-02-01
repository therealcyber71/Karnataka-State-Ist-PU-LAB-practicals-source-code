#include<iostream.h>
#include<conio.h>
void main( )
{
  float rad, area, circum;
  clrscr( );
  cout<<"Enter the radius:";
  cin>>rad;
  area = 3.142 * rad * rad;
  circum = 2 * 3.142 * rad;
  cout<<"Area of circle = "<<area<<endl;
  cout<<"Circumference of circle = "<<circum<<endl;
  getch();
}
