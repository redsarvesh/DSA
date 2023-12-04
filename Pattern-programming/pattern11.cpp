/*

A B C D E 
B C D E F 
C D E F G 
D E F G H 
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
    while(col<=n){
      cout << ch << " ";
      col=col+1; 
      ch++;
    }
    cout << endl;
    row++;
  }
}




