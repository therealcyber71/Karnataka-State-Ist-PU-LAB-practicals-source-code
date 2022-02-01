//Write a C++ program to input principal amount, rate of interest and time period. Calculate compound interest using while statement.
// (Hint: Amount = P * (1 + R/100)T, Compound Interest = Amount 
#include<iostream.h>
#include<conio.h>
void main( )
{
  float pri, amt, priamt, rate, ci;
  int time, year;
  clrscr( );
  cout<<"Enter the Principal amount, rate of interest and time:"<<endl;
  cin>>pri>>rate>>time;
  year = 1;
  priamt = pri;
  while(year <= time)
  {
  amt = pri * (1 + rate/100);
  pri=amt;
  year ++;
  }
  ci = amt - priamt;
  cout<<"Compound Interest = "<<ci<<endl;
  cout<<"Net Amount = "<<amt<<endl;
  getch( );
}
