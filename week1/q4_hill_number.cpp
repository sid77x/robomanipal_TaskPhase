#include <iostream>
#include <string>
using namespace std;
 bool isHillNumber(int num) {
    string strofnum = to_string(num);

    int length = strofnum.length();
    bool inc = true;

    for (int i = 1; i < length; i++) {
        if (strofnum[i] < strofnum[i - 1]) {
            inc = false;
        }
        if (strofnum[i] == strofnum[i - 1]) {
            return false; 
        }
    }

    if (inc) {
        return false; 
    }

    return true;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (isHillNumber(num)) {
        cout << num << " is a Hill Number."  ;
    } else
     {

    
        cout << num << " is not a Hill Number " ;
    }

    return 0;
}
