#include <iostream>
#define MAX 7
#define MMAX 13
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string A[MAX]={"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};
    int M[MMAX]={0,31,59,90,120,151,181,212,243,273,304,334,365};
    int m,d;
    cin >> d >> m;
    cout << A[(M[m-1]+d+2)%MAX];
    return 0;
}