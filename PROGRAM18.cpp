#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
void main( )
{
  int a[50], i, n, largest, secondlar;
  clrscr( );
  cout<<"How many elements?"<<endl;
  cin>>n;
  cout<<"Enter the elements:"<<endl;
  for(i=0; i<n; i++)
  cin>>a[i];
  if(a[0] > a[1])
  {
  largest = a[0];
  secondlar = a[1];
  }
  else
  {
  largest=a[1];
  secondlar=a[0];
  }
  for(i=2; i<n; i++)
  if(a[i] > largest)
  {
  secondlar = largest;
  largest = a[i];
  }
  else
  if(a[i] > secondlar)
  secondlar = a[i];
  cout<<"Largest = "<<largest<<endl;
  cout<<"Second Largest = "<<secondlar<<endl;
  getch( );
}
