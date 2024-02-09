#include <iostream>
using namespace std;
int main(void){
    int a,b;
    cin >> a >> b;
    for (int i=1;i<=b;i++){
        for (int j=1;j<=a;j++){
            cout << '*';
        }
        cout << "\n";
    }
    return 0;
}