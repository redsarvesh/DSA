/*

A A A A A 
B B B B B 
C C C C C 
D D D D D 
E E E E E

*/

#include <iostream>
using namespace std;
int main() {
  int n=5;
  int row=1;
  char ch='A';
  while(row<=n){
    int col=1;
    while(col<=n){
      cout << ch << " ";
      col=col+1; 
    }
    cout << endl;
    row++;
    ch++;
  }
}


