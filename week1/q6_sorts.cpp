#include <iostream>

using namespace std;
static int a[50];
void bubble(int n)
{
    for(int i = 0 ; i < n; i++)
    {
        for(int j = 0 ; j < n-1 ; j++)
        {
            if(a[j]>a[j+1])
            {
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1]=temp;
            }
        }
    }
}
void selection(int n)
{
    for(int i = 0; i < n ; i++)
    {
        int index = i;
        int min = a[i];
        for(int j = i ; j < n ; j++)
        {
            if(a[j]<min) { min = a[j]; index = j;}
            
        }
        int temp = a[i];
        a[i]=min;
        a[index]=temp;
        
    }
}

int main()
{
    cout<<"Enter the number of elements :";
    int n; 
    cin>>n;
    cout<<"Enter the elements :";
    
    for(int i = 0 ; i<n; i++)
    {
        cin>>a[i];
    }
    int choice;
    cout<<"Enter your choice :"<<"\n"<<"1. Bubble Sort \n"<<"2. Selection Sort \n" ;
    cin>>choice;

    switch(choice)
    {
    case 1:
    bubble(n);
    break;

    case 2:
    selection(n);
    break;

    default:
    cout<<"Wrong choice";
    return 1; //error code 1 
    }
    for(int i = 0 ; i<n; i++)
    {
        cout<<a[i];
    }
}
    
