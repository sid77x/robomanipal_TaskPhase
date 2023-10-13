#include <iostream>

using namespace std;

int main() {
  int r1, c1;
  cout << "Enter the number of rows and columns in matrix :";
  cin >> r1;
  cin >> c1;

  bool rowsreplace[100], columnreplace[100];
  int a[100][100];

  cout << "enter matrix :";
  for (int i = 0; i < r1; i++) {
    for (int j = 0; j < c1; j++) {
      cin >> a[i][j];
    }
  }


  for (int i = 0; i < r1; i++) {
    bool isrowzero = false;
    for (int j = 0; j < c1; j++) {
      if (a[i][j] == 0) {
        isrowzero = true;
        break;
      }
    }

    rowsreplace[i] = isrowzero;
  }

  for (int i = 0; i < c1; i++) {
    bool iscolzero = false;
    for (int j = 0; j < r1; j++) {
      if (a[j][i] == 0) {
        iscolzero = true;
        break;
      }
    }

    columnreplace[i] = iscolzero;
  }


  for (int i = 0; i < r1; i++) {
    if (rowsreplace[i]) {
      for (int j = 0; j < c1; j++) {
        a[i][j] = 0;
      }
    }
  }

  for (int i = 0; i < c1; i++) {
    if (columnreplace[i]) {
      for (int j = 0; j < r1; j++) {
        a[j][i] = 0;
      }
    }
  }

//printing mx
  for (int i = 0; i < r1; i++) {
    for (int j = 0; j < c1; j++) {
      cout << a[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}
