#include <iostream>
using namespace std;
int main(){
  int A,B,C;
  cin >> A >> B >> C;
  cout << max(max(A,B),C)*3-A-B-C;
  return 0;
}