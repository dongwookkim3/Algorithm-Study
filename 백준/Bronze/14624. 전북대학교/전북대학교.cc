#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    if (n%2) {
        for (int i=1;i<=n;i++){
            cout << '*';
        }
        cout << "\n";
        for (int i=1;i<=n/2+1;i++){
            for (int j=1;j<=n/2+n%2-i;j++){
                cout << ' ';
            }
            cout << '*';
            if (i==1){
                cout << "\n";
                continue;
            }
            for (int j=1;j<(i-1)*2;j++){
                cout << ' ';
            }
            cout << "*\n";
        }
    }
    else cout << "I LOVE CBNU";
    return 0;
}