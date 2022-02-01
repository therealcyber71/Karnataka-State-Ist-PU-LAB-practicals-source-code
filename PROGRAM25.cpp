//Write a C++ program to determine whether the string is a palindrome.
#include<iostream.h>
#include<conio.h>
#include<string.h>
void main( )
{
char s[100], r[100]; //s is the string and r is the reserved string
clrscr( );
cout<<"Enter the String:";
cin.getline(s, 100);
strcpy (r, s); // Copy the characters of the string s to r
strrev (r); // Reverse the characters of the string r
if(strcmpi(s, r) == 0)
cout<<"It is palindrome"<<endl;
else
cout<<"It is not palindrome"<<endl;
getch( );
}
