#include <iostream>
#include <cstring>
#define MAX 10000000
using namespace std;
int main(){
    char A[MAX],B[MAX];
    cin >> A >> B;
    cout << (strstr(A,B)!=NULL);
    return 0;
}