//Write a C++ program to arrange a list of numbers in ascending order
#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
void main( )
{
  int a[50], i, temp, j, n;
  clrscr( );
  cout<<"Enter the number of elements:"<<endl;
  cin>>n;
  cout<<"Enter the elements:"<<endl;
  for(i=0; i<n; i++)
  cin>>a[i];
  for(i=1; i<n; i++)
  {
    for(j=0; j<n-i; j++)
    if(a[j] > a[j+1])
  {
    temp = a[j];
    a[j] = a[j+1];
    a[j+1] = temp;
  }
  }
    cout<<"The sorted elements are:"<<endl;
    for(i=0; i<n; i++)
    cout<<a[i]<<"\t";
    getch( );
}
