#include <iostream>
using namespace std;
int main(){
    int A,B;
    cin >> A >> B;
    cout << min(A,60+B)*1500+max(0,A-B-60)*3000;
    return 0;
}