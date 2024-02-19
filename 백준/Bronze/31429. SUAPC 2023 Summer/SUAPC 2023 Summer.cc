#include <iostream>
#define MAX 11
using namespace std;
int main(){
    int A[MAX]={12,11,11,10,9,9,9,8,7,6,6};
    int B[MAX]={1600,894,1327,1311,1004,1178,1357,837,1055,556,773};
    int n;
    cin >> n;
    cout << A[n-1] << ' ' << B[n-1];
    return 0;
}