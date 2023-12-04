/*

A 
B C 
D E F 
G H I J 
K L M N O 

*/

#include <iostream>
using namespace std;
int main() {
  int n=5;
  int row=1;
  char ch='A';
  while(row<=n){
    int col=1;
    while(col<=row){
      cout << ch << " ";
      col=col+1; 
      ch++;
    }
    cout << endl;
    row++;
  }
}


