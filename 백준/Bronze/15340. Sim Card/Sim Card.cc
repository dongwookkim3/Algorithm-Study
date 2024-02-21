#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int A,B;
    while(cin >> A >> B && (A || B)){
        cout << min({A*30+B*40,A*35+B*30,A*40+B*20}) << "\n";
    }
    return 0;
}