//Write a C++ program to count the number of vowels and consonants in a
//string.

#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
void main( )
{
char s[100];
int len, i, cons=0, vow=0;
clrscr( );
cout<<"Enter the string:";
cin.getline(s,100);
len=strlen(s);
for(i=0;i<len;i++)
if( isalpha (s[i]) )
switch (toupper (s[i]) )
{
case'A':
case'E':
case'I':
case'O':
case'U': vow++;
break;
default: cons++;
}
cout<<"Number of Vowles:"<<vow<<endl;
cout<<"Number of Consonants:"<<cons<<endl;
getch();
}
