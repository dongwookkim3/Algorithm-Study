#include <iostream>
#include <vector>
#define MAX 10
using namespace std;
int main(){
    int a=0,b=0;
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
    cout << a*3+(10-a-b) << ' ' << b*3+(10-a-b) << "\n";
    if (a>b) cout << 'A';
    else if (a<b) cout << 'B';
    else if (a==0 && b==0){
        cout << 'D';
    }
    else {
        for (int i=MAX-1;i>=0;i--){
            if (A[i]!=B[i]){
                if (A[i]>B[i]){
                    cout << 'A';
                }
                else {
                    cout << 'B';
                }
                break;
            }
        }
    }
    return 0;
}