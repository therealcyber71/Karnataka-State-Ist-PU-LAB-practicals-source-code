//Write a C++ program to interchange the values of two variables without using third variable.
#include<iostream.h>
#include<conio.h>
void main( )
{
  int a, b;
  clrscr( );
  cout<<"Enter the two numbers:"<<endl;
  cin>>a>>b;
  cout<<"Before Interchanging : a = " <<a<<" and b = "<<b<<endl;
  a = a + b ;
  b = a - b ;
  a = a - b ;
  cout<<"After Interchanging : a = " <<a<<" and b = "<<b<<endl;
  getch();
}
