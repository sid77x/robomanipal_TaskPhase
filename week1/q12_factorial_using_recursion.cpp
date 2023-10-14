#include <iostream>

using namespace std;

int factorial(int a)
{
    if(a==0) return 1;
    else{
        return a*factorial(a-1);
    }
}
int main()
{
    int a;
    cout<<"Enter a number";
    cin>>a;
    cout<<factorial(a);

}