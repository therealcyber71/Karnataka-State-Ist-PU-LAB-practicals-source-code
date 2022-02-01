//Write a C++ program to find the sum of two compatible matrices:
#include<iostream.h>
#include<conio.h>
void main( )
{
  int a[5][5], b[5][5], sum[5][5], r1, c1, r2, c2, i, j;
  clrscr( );
  cout << "Enter the order of first matrix: ";
  cin >> r1>>c1;
  cout << "Enter the order of second matrix: ";
  cin >> r2>>c2;
  // Storing elements of first matrix entered by user.
  cout << "Enter elements of 1st matrix: " << endl;
  for (i = 0; i < r1; i++)
  for (j = 0; j < c1; j++)
  cin >> a[i][j];
  // Storing elements of second matrix entered by user.
  cout << "Enter elements of 2nd matrix: " << endl;
  for(i = 0; i < r2; i++)
  for(j = 0; j < c2; j++)
  cin >> b[i][j];
  if ( (r1 == r2) && (c1==c2))
  {
  for(i = 0; i < r1; i++)
  for(j = 0; j < c1; j++)
  sum[i][j] = a[i][j] + b[i][j]; // Adding Two matrices
  cout << "Sum of two matrix is: " << endl;
  for(i = 0; i < r1; i++)
  {
  for(j = 0; j < c1; j++)
  cout << sum[i][j] << "\t"; // Displaying the resultant sum matrix.
  cout << endl;
  }
  }
  else
  cout<<"Matrices are not compatible..."<<endl;
  getch( );
}
