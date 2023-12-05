/*

12345
 2345
  345
   45
    5

*/

#include <iostream>
using namespace std;
int main() {
  int n = 5;
  int row = 1;
  while(row<=n){
    int col=row;
    int space=1;
    while(space<=row-1){
      cout << " ";
      space++;
    }
    while(col<=n){
      cout << col;
      col++;
    }
    cout << endl;
    row++;
  }
}
