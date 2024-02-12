#include <iostream>
#include <vector>
#define MAX 4
using namespace std;
int main(){
    vector<int> A(MAX);
    for (int i=0;i<MAX;i++){
        cin >> A[i];
    }
    if (A.front()+A.back()>A[1]+A[2]) cout << "Persepolis";
    else if (A.front()+A.back()<A[1]+A[2]) cout << "Esteghlal";
    else {
        if (A.back()>A[1]) cout << "Persepolis";
        else if (A.back()<A[1]) cout << "Esteghlal";
        else cout << "Penalty";
    }
    return 0;
}