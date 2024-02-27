#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n,a,b;
    cin >> n >> a >> b;
    vector<bool> A(n,true);
    for (int i=1;i<=a+b;i++){
        int c;
        cin >> c;
        A[c-1]=false;
    }
    cout << n-a-b << "\n";
    for (int i=0;i<n;i++){
        if (A[i]){
            cout << i+1 << ' ';
        }
    }
    return 0;
}