/*

1 
2 1 
3 2 1 
4 3 2 1 
5 4 3 2 1 

*/

#include <iostream>
using namespace std;
int main() {
  int n=5;
  int row=1;
  while(row<=n){
    int col=1;
    int count=row;
    while(col<=row){
      cout << count << " ";
      col=col+1;
      count--;
    }
    cout << endl;
    row++;
  }
}


