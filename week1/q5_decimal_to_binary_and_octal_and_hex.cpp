#include <iostream>
#include <math.h>

using namespace std;

int main()
{
  int a;
  cout << "Enter a number: ";
  cin >> a;
  int binary=0, i = 1;
  int temp = a;

  while(temp!=0)
  {
    int rem = temp % 2;
    temp /= 2;
    binary += rem * i;
    i *= 10;
  }
  int temp2 = a;
  cout<<"Binary : "<<binary<<"\n";

   cout<<"Hexadecimal is :";

    while(temp2!=0){
    int rem =  temp2% 16;
    temp2/= 16;
    if (rem > 9)
        cout << (char)(rem - 10 + 'A');
    else
        cout << rem << endl;
    }
    cout<<"Octal is :";

  int temp3 = a;
  while(temp3 !=0)
  {
    cout<<temp3%8;
    temp3/=8;

  }
}
