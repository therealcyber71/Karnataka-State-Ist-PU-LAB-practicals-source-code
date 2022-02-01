//Write a C++ program to generate the Fibonacci sequence up to a limit
//using for statement. (Hint: 5 = 0 1 1 2 )
#include<iostream.h>
#include<conio.h>
void main( )
{
  int num, first, second, count, third;
  clrscr( );
  cout<<"Enter the number limit for Fibonacci Series"<<endl;
  cin>>num;
  first = 0;
  second = 1;
  cout<<first<<"\t"<<second;
  third = first + second;
  for( count = 2; third<=num; count++)
  {
  cout<<"\t"<<third
  first = second;
  second = third;
  third = first + second;
  }
  cout<<"\n Total terms = "<<count<<endl;
  getch( );
}
