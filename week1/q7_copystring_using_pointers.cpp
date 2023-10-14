#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    cout<<"Enter a string :";
    char a[100];
    cin>>a;
    char *p = &a[0];
    char b[100];
    for(int i = 0; i<strlen(a)||b[i]!='\0';i++) 
    {
        b[i] = *(p+i);       
    }
    cout<<b;
    }

