#include <iostream>


using namespace std;
int main()
{
    
    cout<<"Enter the number of letters";
    int n;
    cin>>n;
    char a[n];
    cout<<"Enter the array";
    for(int i = 0; i<n; i++)
    {
        cin>>a[i];
    }
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<n-1; j++)
        {
        if(a[j]>a[j+1])
        {
            char temp = a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
        }
        }
    }

    for(int i = 0; i<n; i++)
    {
        cout<<a[i];
    }
}
