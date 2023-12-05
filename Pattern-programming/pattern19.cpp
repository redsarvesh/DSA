/*

*****
****
***
**
*

*/

#include <iostream>
using namespace std;
int main() {
  int n=5;
  int row=1;
  while(row<=n){
    int col=row;
    while(col<=n){
      cout << "*";
      col++;
    }
    cout << endl;
    row++;
  }
}