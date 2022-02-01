//Write a C++ program to input the number of units of electricity
//consumed in a house and calculate the final amount using nested-if statement.
//Use the following data for calculation. Data in lab manual/question paper

#include<iostream.h>
#include<conio.h>
void main( )
{
  int units ;
  float Billamount;
  clrscr( );
  cout<<"Enter the number of units consumed:"<<endl;
  cin>>units;
  if(units < 30)
  Billamount = units * 3.50 ;
  else
  if(units < 50)
  Billamount = 29 * 3.50 + (units - 29) * 4.25 ;
  else
  if(units < 100)
  Billamount = 29 * 3.50 + 19 * 4.25 + (units - 49) * 5.25 ;
  else
  Billamount = 29 * 3.50 + 19 * 4.25 + 49 * 5.25 + (units - 99) * 5.85 ;
  cout<<"Total Units Consumed ="<<units<<endl;
  cout<<"Total Amount = "<<Billamount<<endl;
  getch( );
}
