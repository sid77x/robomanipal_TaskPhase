#include <iostream>

using namespace std;
int main()
{
    int a,b;
    cout<<"Enter the numbers";
    int s1=0,s2=0;
    cin>>a;
    cin>>b;
    for(int i = 1; i<a; i++)
    {
        if(a%i==0) s1+=i;
    }
    
    for(int i = 1; i<b; i++)
    {
        if(b%i==0) s2+=i;
    }
    ((s1==b)&&(s2==a))?cout<<"Amicable numbers":cout<<"Not amicable numbers";
}
