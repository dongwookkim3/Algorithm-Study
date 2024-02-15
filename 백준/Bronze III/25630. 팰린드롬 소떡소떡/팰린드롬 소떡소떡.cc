#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n,m=0;
    string A;
    cin >> n >> A;
    for (int i=0;i<n/2;i++){
        if (A[i]!=A[A.length()-i-1]){
            m++;
        }
    }
    cout << m;
}