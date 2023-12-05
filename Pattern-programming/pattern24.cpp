/*

  1
 23
456

*/

#include <iostream>
using namespace std;
int main() {
  int n = 3;
  int row = 1;
  int count=1;
  while(row<=n){
    int space=1;
    while(space<=(n-row)){
      cout << " ";
      space++;
    }
    int col=1;
    while(col<=row){
      cout << count;
      count++;
      col++;
    }
    cout << endl;
    row++;
  }
}
