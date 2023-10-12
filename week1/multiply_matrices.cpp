#include <iostream>

using namespace std;
int main()
{
    int r1,c1,r2,c2;
    cout<<"Enter the number of rows and columns in matrix1 :";
    cin>>r1;
    cin>>c1;
    cout<<"Enter the number of rows and columns in matrix2 :";
    cin>>r2;
    cin>>c2;
    if(r2!=c1) {cout<<"Not Compatible"; return 0;}
    int a[100][100];
    int b[100][100];
    int prod [100][100];
    cout<<"enter matrix 1 :";
    for(int i = 0 ; i <r1; i++)
    {
        for(int j = 0 ; j <c1; j++)
    {
        cin>>a[i][j];
    }

    }
  
    
    cout<<"enter matrix 2 :";
    for(int i = 0 ; i <r2; i++)
    {
    for(int j = 0 ; j <c2; j++)
    {
        cin>>b[i][j];
    }

    }
    for (int i = 0; i < r1; ++i) {
  for (int j = 0; j < c2; ++j) {
    prod[i][j] = 0;
  }
}
    for (int i = 0; i < r1; ++i) {
      for (int j = 0; j < c2; ++j) {
         for (int k = 0; k < c1; ++k) {
            prod[i][j] += a[i][k] * b[k][j];
         }
      }
   }
   cout<<"Output Matrix is :";
   
    for(int i = 0 ; i <r1; i++)
    {
    for(int j = 0 ; j <c2; j++)
    {
        cout<<prod[i][j]<<" ";
    }
        cout<<"\n";
    }

    
}