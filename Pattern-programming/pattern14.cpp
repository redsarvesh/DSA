/*

A 
B C 
C D E 
D E F G 
E F G H I 

*/

#include <iostream>
using namespace std;
int main() {
  int n=5;
  int row=1;
  
  while(row<=n){
    int col=1;
    char ch='A'+row-col;
    while(col<=row){
      cout << ch << " ";
      col=col+1; 
      ch++;
    }
    cout << endl;
    row++;
  }
}


