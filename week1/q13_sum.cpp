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
    
    cout<<sum(a);
}