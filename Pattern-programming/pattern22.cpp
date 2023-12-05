/*

    1
   22
  333
 4444
55555

*/

#include <iostream>
using namespace std;
int main() {
  int n = 5;
  int row = 1;
  while (row <= n) {
    int space = 1;
    while (space <= (n-row)) {
      cout << " ";
      space++;
    }
    int col = 1;
    while (col <= row) {
      cout << row;
      col++;
    }
    cout << endl;
    row++;
  }
}
