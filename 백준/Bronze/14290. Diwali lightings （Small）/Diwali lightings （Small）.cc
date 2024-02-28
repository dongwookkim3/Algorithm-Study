#include <iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    for (int i=1;i<=t;i++){
        string A;
        int a,b,m=0;
        cin >> A >> a >> b;
        for (int j=a-1;j<b;j++){
            if (A[j%A.length()]=='B'){
                m++;
            }
        }
        cout << "Case #" << i << ": " << m << "\n";
    }
    return 0;
}