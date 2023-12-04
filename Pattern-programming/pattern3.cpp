/*
3 2 1 
3 2 1 
3 2 1
*/


#include <iostream>
using namespace std;
int main() {
  int n=3;
  int row=1;
  while(row<=n){
    int col=1;
    int count=n;
    while(col<=n){
      cout<< count <<" ";
      col++;
      count--;
    }
    cout << endl;
    row=row+1;
  }
}