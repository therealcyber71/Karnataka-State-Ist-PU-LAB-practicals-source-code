//Write a C++ program to check whether a given year is a leap year not,
//Using if - else statement
#include<iostream.h>
#include<conio.h>
void main( )
{
  int year ;
  clrscr( );
  cout<<"Enter the Year in the form YYYY"<<endl;
  cin>>year;
  if(year%4 ==0 && year%100!=0 || year%400 ==0)
  cout<<year<<" is a leap year"<<endl;
  else
  cout<<year<<" is not leap year"<<endl;
  getch( );
}
