//Write a C++ program to find Xy using functions.
#include<iostream.h>
#include<conio.h>
void main( )
{
float power(float,int);
float x;
int y;
clrscr( );
cout<<"Enter the Base and Exponent:"<<endl;
cin>>x>>y;
cout<<x<<" to the power of "<<y<<" ="<<power(x,y)<<endl;
getch( );
}
float power(float a, int n)
{
if(a==0)
return 0.0;
if(n==0)
return 1.0;
else
if(n>0)
return(a * power(a,n-1));
else
return(power(a, n+1)/a);
}
