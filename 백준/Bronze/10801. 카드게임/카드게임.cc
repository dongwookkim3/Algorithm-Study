#include <iostream>
#include <vector>
#define MAX 10
using namespace std;
int main(){
    int a,b;
    vector<int> A(MAX,0);
    vector<int> B(MAX,0);
    for (int i=0;i<MAX;i++){
        cin >> A[i];
    }
    for (int i=0;i<MAX;i++){
        cin >> B[i];
        if (A[i]>B[i]) a++;
        else if (A[i]<B[i]) b++;
    }
    if (a==b) cout << 'D';
    else if (a>b) cout << 'A';
    else if (a<b) cout << 'B';
    return 0;
}