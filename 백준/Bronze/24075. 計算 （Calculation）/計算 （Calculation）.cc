#include <iostream>
using namespace std;
int main(){
    int A,B;
    cin >> A >> B;
    cout << max(A+B,A-B) << "\n" << min(A+B,A-B);
    return 0;
}