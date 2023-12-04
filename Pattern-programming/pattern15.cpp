/*

E 
D E 
C D E 
B C D E 
A B C D E 

*/

#include <iostream>
using namespace std;
int main() {
  int n=5;
  int row=1;

  while(row<=n){
    int col=1; 
    char ch='E'+col-row;
    while(col<=row){
      cout << ch << " ";
      col=col+1; 
      ch++;
    }
    cout << endl;
    row++;
  }
}


