#include <iostream>

using namespace std;
int main()
{
    int r1,c1;
    cout<<"Enter the number of rows and columns in matrix :";
    cin>>r1;
    cin>>c1;
  
   
    int a[100][100];
    
    cout<<"enter matrix :";
    for(int i = 0 ; i <r1; i++)
    {
        for(int j = 0 ; j <c1; j++)
    {
        cin>>a[i][j];
    }

    }
     for(int i = 0 ; i <r1; i++)
    {
        for(int j = 0 ; j <c1; j++)
    {
        if(a[i][j] == 0)
        {
            for(int k = 0; k<c1; k++)
            {
                a[i][k]=0;
            }
            continue;
        }
    }

    }
    for(int i = 0 ; i <r1; i++)
    {
    for(int j = 0 ; j <c1; j++)
    {
        cout<<a[i][j]<<" ";
    }
        cout<<"\n";
    }
  

}