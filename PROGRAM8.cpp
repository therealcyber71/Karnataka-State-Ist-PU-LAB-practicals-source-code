//Write a C++ program to accept a character. Determine whether the
//character is a lower-case or upper-case letter.
#include<iostream.h>
#include<conio.h>
void main( )
{
  char ch ;
  clrscr( );
  cout<<"Enter the Character"<<endl;
  cin>>ch;
  if(ch>= 'A' && ch <='Z')
  cout<<ch<<" is an Upper-Case Character"<<endl;
  else
  if(ch>= 'a' && ch <='z')
  cout<<ch<<" is an Lower-Case Character"<<endl;
  else
  cout<<ch<<" is not an alphabet"<<endl;
  getch( );
}
