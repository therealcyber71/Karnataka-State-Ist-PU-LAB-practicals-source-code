#include<iostream.h>
#include<conio.h>
void main( )
{
  int a, b, c;
  int largest, smallest, seclargest;
  clrscr( );
  cout<<"Enter the three numbers"<<endl;
  cin>>a>>b>>c;
  largest = a; //Assume first number as largest
  if(b>largest)
  largest = b;
  if(c>largest)
  largest = c;
  smallest = a; //Assume first number as smallest
  if(b<smallest)
  smallest = b;
  if(c<smallest)
  smallest = c;
  seclargest = (a + b + c) - (largest + smallest);
  cout<<"Smallest Number is = "<<smallest<<endl;
  cout<<"Second Largest Number is = "<<seclargest<<endl;
  cout<<"Largest Number is = "<< largest<<endl;
  getch( );
}
