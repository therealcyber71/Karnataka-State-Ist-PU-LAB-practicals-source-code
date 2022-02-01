//Write a C++ program to find the GCD and LCM of two numbers using
//functions.
#include<iostream.h>
#include<conio.h>
void main( )
{
int gcd(int, int); //Function Prototype
int a, b, g, lcm;
clrscr( );
cout<<"Enter two number:"<<endl;
cin>>a>>b;
g = gcd(a,b);
lcm = (a * b)/g;
cout<<"GCD of "<<a<<" and "<<b<<" is "<<g<<endl;
cout<<"LCM of "<<a<<" and "<<b<<" is "<<lcm<<endl;
getch( );
}
int gcd( int x, int y)
{
int rem;
while(y != 0)
{
rem = x % y;
x = y;
y = rem;
}
return(x);
}
