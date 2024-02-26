#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n,m=0;
    cin >> n;
    vector<int> A(n);
    for (int i=0;i<n;i++){
        cin >> A[i];
    }
    for (int i=0;i<n;i++){
        int B;
        cin >> B;
        if (A[i]>B) m+=3;
        else if (A[i]==B) m++;
    }
    cout << m;
    return 0;
}