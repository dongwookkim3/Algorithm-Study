#include <iostream>
using namespace std;
int main(){
  int n;
  cin >> n;
  for (int i=1;i<=n;i++){
    int A,B;
    cin >> A >> B;
    A-=B/7;
    A+=B/4;
    cout << A << endl;
  }
  return 0;
}