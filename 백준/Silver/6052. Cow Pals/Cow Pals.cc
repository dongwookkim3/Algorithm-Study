#include <iostream>
#define MAX 100000
using namespace std;
int main(){
    long long A[MAX+1]={};
    for (int i=1;i<=MAX;i++){
        for (int j=i+i;j<=MAX;j+=i){
            A[j]+=i;
        }
    }
    int n;
    cin >> n;
    while(n++){
        if (n-1==A[A[n-1]] && n-1!=A[n-1]){
            cout << n-1 << ' ' << A[n-1];
            break;
        }
    }
    return 0;
}