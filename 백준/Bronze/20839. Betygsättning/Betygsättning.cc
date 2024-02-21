#include <iostream>
using namespace std;
int main(){
    int A1,A2,B1,B2,C1,C2;
    cin >> A1 >> B1 >> C1 >> A2 >> B2 >> C2;
    if (A2>=A1 && B2>=B1 && C2>=C1) cout << 'A';
    else if (A2*2>=A1 && B2>=B1 && C2>=C1) cout << 'B';
    else if (B2>=B1 && C2>=C1) cout << 'C';
    else if (B2*2>=B1 && C2>=C1) cout << 'D';
    else cout << 'E';
    return 0;
}