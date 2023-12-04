/*
1 2 3 4 5 
2 3 4 5 6 
3 4 5 6 7 
4 5 6 7 8 
5 6 7 8 9 
*/


#include <iostream>
using namespace std;
int main() {
  int n=5;
  int row=1;
  while(row<=n){
    int count=row;
    int col=1;
    while(col<=n){
      cout<< count <<" ";
      col++;
      count++;    
    }
    cout << endl;
    row=row+1;
  }
}
