//Write a C++ program to convert days into years, months and days.
//(Hint: Assume all months have 30 days)
#include<iostream.h>
#include<conio.h>
void main( )
{
  int totaldays, days, year, month;
  clrscr( );
  cout<<"Enter the total days:";
  cin>>totaldays;
  year = totaldays/365;
  totaldays = totaldays % 365;
  month = totaldays/30;
  days = totaldays % 30;
  cout<<"Years = "<< years<<endl;
  cout<<"Months = "<<month<<endl;
  cout<<"Days = "<<days<<endl;
  getch();
}
