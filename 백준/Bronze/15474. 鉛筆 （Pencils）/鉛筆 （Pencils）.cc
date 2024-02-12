#include <iostream>
using namespace std;
int main(){
    int N,A,B,C,D;
    cin >> N >> A >> B >> C >> D;
    if (N%A==0) B*=N/A;
    else B*=N/A+1;
    if (N%C==0) D*=N/C;
    else D*=N/C+1;
    cout << min(B,D);
    return 0;
}