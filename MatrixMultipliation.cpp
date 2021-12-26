

// Matrix Multiplication


#include<iostream.h>
#include<conio.h>


void main()
{
 clrscr();
 int matA[10][10],matB[10][10],matC[10][10],i,j,k,m,n;
 cout<<"Enter the number of rows & coloumns:\n";
 cin>>m>>n;
 cout<<"\nEnter the elements of 1st matrix:\n";
 for(i=0;i<m;i++)
 {
   for(j=0;j<n;j++)
    {
     cin>>matA[i][j];
     }
  }
 cout<<"\nEnter the elements of 2nd matrix:\n";
  for(i=0;i<m;i++)
  {
   for(j=0;j<n;j++)
   {
    cin>>matB[i][j];
    }
   }
   for(i=0;i<m;i++)
   {
    for(j=0;j<n;j++)
    {
     matC[i][j]=0;
     for(k=0;k<n;k++)
     {
      matC[i][j]=matC[i][j]+matA[i][k]*matB[k][j];
      }
     }
    }
   cout<<"\nmatrix C is:\n";
   for(i=0;i<m;i++)
   {
    cout<<"\n";
    for(j=0;j<n;j++)
    {
     cout<<matC[i][j];
     cout<<"\t";
     }
    }
  getch();
 }


