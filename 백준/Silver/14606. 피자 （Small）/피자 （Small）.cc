#include <iostream>
#define MAX 10
using namespace std;
int main(){
    int A[MAX+1]={};
    for (int i=2;i<=MAX;i++){
        A[i]=A[i-1]+i-1;
    }
    int n;
    cin >> n;
    cout << A[n];
    return 0;
}