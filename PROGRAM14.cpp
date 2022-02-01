//Write a C++ program to check whether the given number is an
//Armstrong Number using do-while statement. (Hint: 153 = 13 + 53 
#include<iostream.h>
#include<conio.h>
void main( )
{
  int num, rem, sum, temp;
  clrscr( );
  cout<<"Enter the three digit number"<<endl;
  cin>>num;
  temp = num;
  sum = 0;
  do
  {
  rem = temp % 10;
  sum = sum + rem * rem * rem;
  temp = temp / 10;
  }while(temp!=0);
  if(sum == num)
  cout<<num<<" is an Armstrong Number "<<endl;
  else
  cout<<num<<" is not an Armstrong Number "<<endl;
  getch( );
}
