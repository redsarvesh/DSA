/*

11111
 2222
  333
   44
    5

*/


#include <iostream>
using namespace std;
int main() {
  int n = 5;
  int row = 1;
  while (row <= n) {
    int space = 1;
    while (space <= (row-1)) {
      cout << " ";
      space++;
    }
    int col = row;
    while (col <= n) {
      cout << row;
      col++;
    }
    cout << endl;
    row++;
  }
}
