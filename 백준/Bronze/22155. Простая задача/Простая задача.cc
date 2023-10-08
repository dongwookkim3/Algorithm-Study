#include <iostream>
using namespace std;
int main(){
  int A,B,n;
  cin >> n;
  while(n--){
    cin >> A >> B;
    if ((A<=1 && B<=2) || (A<=2 && B<=1)) cout << "Yes\n";
    else cout << "No\n";
  }
  return 0;
}