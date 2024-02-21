#include <iostream>
using namespace std;
int main(){
    int A,B;
    cin >> A >> B;
    for (int i=1;i<=A;i++){
        for (int j=1;j<=B;j++){
            if ((i+j)%2==0){
                cout << '*';
            }
            else {
                cout << '.';
            }
        }
        cout << "\n";
    }
    return 0;
}