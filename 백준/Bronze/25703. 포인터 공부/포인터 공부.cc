#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    cout << "int a;\nint *ptr = &a;\n";
    if (n>=2) cout << "int **ptr2 = &ptr;\n";
    for (int i=3;i<=n;i++){
        cout << "int ";
        for (int j=1;j<=i;j++){
            cout << '*';
        }
        cout << "ptr" << i << " = &ptr" << i-1 << ";\n";
    }
    return 0;
}