/*

1 
2 3 
4 5 6 
7 8 9 10 
11 12 13 14 15

*/

#include <iostream>
using namespace std;
int main() {
  int n=5;
  int row=1;
  int count=1;
  while(row<=n){
    int col=1;
    while(col<=row){
      cout << count << " ";
      col=col+1;
      count++;
    }
    cout << endl;
    row++;
  }
}


