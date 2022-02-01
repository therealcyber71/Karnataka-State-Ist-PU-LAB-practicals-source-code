//Write a C++ program to input the marks of four subjects. Calculate the
//total percentage and output the result as either “First Class” or “Second Class”
//or “Pass Class” or “Fail” using switch statement.
//Table in book

#include<iostream.h>
#include<conio.h>
void main( )
{
  int m1, m2, m3, m4, total, choice;
  float per;
  clrscr( );
  cout<<"Enter the First subject marks:";
  cin>>m1;
  cout<<"Enter the Second subject marks:";
  cin>>m2;
  cout<<"Enter the Third subject marks:";
  cin>>m3;
  cout<<"Enter the Fourth subject marks:";
  cin>>m4;
  total = m1 + m2 + m3 + m4;
  per = total / 4.0;
  cout<<"Total Marks = "<<total<<endl;
  cout<<"Percentage = "<<per<<endl;
  choice = (int) per/10;
  cout<<"The result of the student is: "<<endl;
  switch(choice)
  {
    case 10:
    case 9:
    case 8:
    case 7:
    case 6: cout<<"First Class "<<endl;
    break;
    case 5: cout<<"Second Class"<<endl;
    break;
    case 4: cout<<"Pass Class"<<endl;
    break;
    default: cout<<"Fail"<<endl;
  }
  getch( );
}
