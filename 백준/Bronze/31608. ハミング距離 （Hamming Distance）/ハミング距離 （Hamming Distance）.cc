#include <iostream>
using namespace std;
int main(){
    int n,m=0;
    string A,B;
    cin >> n >> A >> B;
    for (int i=0;i<n;i++){
        if (A[i]!=B[i]){
            m++;
        }
    }
    cout << m;
    return 0;
}