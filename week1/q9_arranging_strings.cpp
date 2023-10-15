#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

void rearrange_strings(char word[][100], int n) {
  // Sort the rows of the array by their lengths.
  for(int i = 0 ; i < n ; i++)
  {
    for(int j = 0 ; j < n-1; j++)
    {
        if(strlen(word[j])<strlen(word[j+1])) 
        {
            char temp[50];
            strcpy(temp, word[j]);
            strcpy(word[j], word[j+1]);
            strcpy(word[j+1], temp);
        }
    }
  }
}

int main() {
  char word[][100] = {
    "number",
    "cat",
    "word",
  };

  int n = sizeof(word) / sizeof(word[0]);

  // Rearrange the strings in ascending order based on their lengths.
  rearrange_strings(word, n);

  // Print the rearranged array.
  for (int i = 0; i < n; i++) {
    cout << word[i] << endl;
  }

  return 0;
}
