#include <iostream>
using namespace std;

int fibonacci(int n)
{
    if (n==0 || n==1)
        return n;
    else 
        return fibonacci(n-1)+fibonacci(n-2);
}

int main()
{
   
    cout<<"Fibonacci upto 40 terms is: "<<fibonacci(40); // Léonardo Pisano (real name of Fibonacci)
}