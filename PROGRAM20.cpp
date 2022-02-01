//Write a C++ program to find position of a given number in the array.
#include<iostream.h>
#include<conio.h>
#include<iomanip.h>
void main( )
{
int a[50], i, pos, ele, n;
clrscr( );
cout<<"Enter the number of elements:"<<endl;
cin>>n;
cout<<"Enter the elements:"<<endl;
for(i=0; i<n; i++)
cin>>a[i];
cout<<"Enter the search element:"<<endl;
cin>>ele;
pos=-1;
for(i=0; i<n; i++)
if(ele == a[i])
{
pos = i;
break;
}
if(pos >= 0)
cout<<ele<<" is present at position "<<pos<<endl;
else
cout<<ele<<" is not present"<<endl;
getch( );
}
