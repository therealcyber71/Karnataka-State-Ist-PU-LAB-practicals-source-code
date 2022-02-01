//Write a C++ program to find the sum and average of n number of the
//array.

#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
void main( )
{
  int a[50], i, n, sum;
  float avg;
  clrscr();
  cout<<"How many elements?"<<endl;
  cin>>n;
  cout<<"Enter the elements:"<<endl;
  for(i=0; i<n; i++)
  cin>>a[i];
  sum = 0;
  for(i=0; i<n; i++)
  sum = sum + a[i];
  avg=(float) sum / n;
  cout<<"Sum = "<<sum<<endl;
  cout<<"Average = "<<avg<<endl;
  getch( );
}
