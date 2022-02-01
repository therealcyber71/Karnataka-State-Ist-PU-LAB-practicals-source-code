#include<iostream.h>
#include<conio.h>
#include<math.h>
void main( )
{
  float s1, s2, s3, s, area;
  clrscr( );
  cout<<"Enter the length of three sides:";
  cin>>s1>>s2>>s3;
  s = (s1 + s2+ s3)/2;
  area = sqrt( s* (s-s1) * (s-s2) * (s-s3));
  cout<<"Area of triangle = "<<area<<endl;
  getch();
}
