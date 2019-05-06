#include <iostream>
using namespace std;

int main(){
  int a;
  cin >> a;
  int x,y;

  for (x=0; x<a; x++){
    for (y=0; y<=x; y++){
      cout << "*";
    }
    cout << endl;
  }
  for (x=a-1; x>0; x--){
    for (y=x-1; y>=0; y--){
      cout << "*";
    }
    cout << endl;
  }
  return 0;

}