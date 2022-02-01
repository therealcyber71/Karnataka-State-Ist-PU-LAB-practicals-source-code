//Write a C++ program to sum of all the row and sum of all the column in
//matrices separately.
#include<iostream.h>
#include<conio.h>
void main( )
{
  int a[5][5], r, c, i, j, rsum, csum;
  clrscr( );
  cout << "Enter the order of matrix: ";
  cin >> r>>c;
  // Storing elements of matrix entered by user.
  cout << "Enter elements of the matrix: " << endl;
  for (i = 0; i < r; i++)
  for (j = 0; j < c; j++)
  cin >> a[i][j];
  for(i = 0; i < r; i++)
  {
  rsum = 0;
  for(j = 0; j < c; j++)
  rsum = rsum + a[i][j];
  cout<<"Sum of row no "<<i+1<<" = "<<rsum<<endl;
  }
  for(i = 0; i < c; i++)
  {
  csum = 0;
  for(j = 0; j < r; j++)
  csum = csum + a[j][i];
  cout<<"Sum of column no "<<i+1<<" = "<<csum<<endl;
  }
  getch( );
}
