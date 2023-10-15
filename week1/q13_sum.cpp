#include <iostream>

using namespace std;
int sum(int a)
{
   
    if (a == 0) return 0;
    
    
    else{
        
        return a%10+(sum(a/10));
    }
}
int main()
{
    int a;
    cout<<"Enter a number :"<<endl;
 
    cin>>a;
       cout<<"Using recursion : \n";
    cout<<sum(a)<<"\n";
    cout<<"Without recursion : \n";

    int temp  = a;
    int sum = 0;
    while(temp!=0)
    {
        sum+=(temp%10);
        temp/=10;
    }
    
    cout<<sum;
}