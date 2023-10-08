#include <iostream>
using namespace std;
int main(){
  int b=0,c=0;
  string A;
  getline(cin,A);
  for (int i=0;i<A.length();i++){
    if (A[i]=='B') b++;
    else c++;
  }
  cout << b/2+c/2;
  return 0;
}