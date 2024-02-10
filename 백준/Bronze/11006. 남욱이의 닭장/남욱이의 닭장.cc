#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    while(n--){
        int a,b;
        cin >> a >> b;
        cout << b*2-a << ' ' << a-b << "\n";
    }
    return 0;
}