/*

A B C D E 
A B C D E 
A B C D E 
A B C D E 
A B C D E 

*/

#include <iostream>
using namespace std;
int main() {
  int n=5;
  int row=1;

  while(row<=n){
    int col=1;
    char ch='A';
    while(col<=n){
      cout << ch << " ";
      col=col+1; 
      ch++;
    }
    cout << endl;
    row++;

  }
}


