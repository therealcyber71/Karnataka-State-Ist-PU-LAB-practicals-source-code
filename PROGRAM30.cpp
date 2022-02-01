//Write a C++ program to input the register number, name and class of all
//the students in a class into a structure and output the data in a tabular manner
//with proper heading

#include<iostream.h>
#include<conio.h>
struct student
{
int regno;
char name[15];
char section[4];
};
void main( )
{
student s[50];
int i, j, n;
clrscr( );
cout<<"How many students?"<<endl;
cin>>n;
for(i=0; i<n; i++)
{
cout<<"Enter the Reg No of the Student "<<i+1<<":";
cin>>s[i].regno;
cout<<"Enter the Name of the Student "<<i+1<<":";
cin>>s[i].name;
cout<<"Enter the Class of the Student "<<i+1<<":";
cin>>s[i].section;
}
cout<<"REG_NO \t NAME \t CLASS \t"<<endl;
for(i=0; i<n; i++)
cout<<s[i].regno<<"\t"<<s[i].name<<"\t"<< s[i].section<<endl;
getch( );
}
