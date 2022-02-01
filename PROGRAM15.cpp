//Write a C++ program to find the factorial of a number using for
//statement. (Hint: 5! = 5 * 4 * 3 * 2 * 1 = 120)
#include<iostream.h>
#include<conio.h>
void main( )
{
  int num, fact, i;
  clrscr( );
  cout<<"Enter the number"<<endl;
  cin>>num;
  fact = 1;
  for( i = 1; i<= num; i++)
  fact = fact * i;
  cout<<" The factorial of a "<<num<<"! is: "<<fact<<endl;
  getch( );
}
