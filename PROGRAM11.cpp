//Write a C++ program to find sum of all the digits of a number using while statement
#include<iostream.h>
#include<conio.h>
void main( )
{
  int num, sum, rem;
  clrscr( );
  cout<<"Enter the Number"<<endl;
  cin>>num;
  sum = 0;
  while(num!=0)
  {
  rem = num % 10;
  sum = sum + rem;
  num = num/10;
  }
  cout<<"Sum of the digits is "<<sum<<endl;
  getch( );
}
