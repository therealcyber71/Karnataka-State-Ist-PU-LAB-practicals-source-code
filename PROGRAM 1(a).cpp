//Write a C++ program to interchange the values of two variables using a
//third variable
#include<iostream.h>
#include<conio.h>
void main( )
{
  int a, b, temp;
  clrscr( );
  cout<<"Enter the two numbers";
  cin>>a>>b;
  cout<<"Before Interchanging : a = " <<a<<" and b = "<<b<<endl;
  temp = a;
  a = b;
  b = temp;
  cout<<"After Interchanging : a = " <<a<<" and b = "<<b<<endl;
  getch();
}
//
