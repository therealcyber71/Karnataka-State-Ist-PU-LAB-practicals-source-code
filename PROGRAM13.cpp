//Write a C++ program to check whether the given number is power of 2.
#include<iostream.h>
#include<conio.h>
void main( )
{
  int num, m, flag;
  clrscr( );
  cout<<"Enter the Number"<<endl;
  cin>>num;
  m = num;
  flag = 1;
  while(num>2)
  if(num % 2 ==1)
  {
  flag = 0;
  break;
  }
  else
  num = num/2;
  if(flag)
  cout<<m<<" is power of 2 "<<endl;
  else
  cout<<m<<" is not power of 2 "<<endl;
  getch( );
}
