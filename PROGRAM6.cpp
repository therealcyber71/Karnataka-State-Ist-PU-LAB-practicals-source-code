//Write a C++ program to input the total amount in a bill, if the amount is greater than 1000, a discount of 8% is given. Otherwise, no discount is given. Output the total amount, discount and the final amount. Use simple if statement
#include<iostream.h>
#include<conio.h>
void main( )
{
  float TAmount, discount, FAmount ;
  clrscr( );
  cout<<"Enter the Total Amount"<<endl;
  cin>>TAmount;
  discount = 0; //Calculate Discount
  if(TAmount>1000)
  discount = (8/100.0) * TAmount;
  FAmount = TAmount - discount; //Calculate Final Amount
  cout<<"Total Amount = "<<TAmount<<endl;
  cout<<"Discount = "<<discount<<endl;
  cout<<"Final Amount = "<< FAmount<<endl;
  getch( );
}
