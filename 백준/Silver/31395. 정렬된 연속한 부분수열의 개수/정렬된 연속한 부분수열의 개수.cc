#include <iostream>
#include <vector>
#define MAX 200000
using namespace std;
int main(){
    long long n,m=0,s=0;
    vector<int> A(MAX,0);
    cin >> n;
    for (int i=0;i<n;i++){
        cin >> A[i];
        if (i!=0){
            if (A[i]>A[i-1]){
                s++;
                m+=s;
            }
            else {
                s=0;
            }
        }
    }
    cout << n+m;
    return 0;
}