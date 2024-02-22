#include <iostream>
using namespace std;
int main(){
    int n;
    while(cin >> n && n!=0){
        int m=0;
        for (int i=0;i<n;i++){
            int a;
            cin >> a;
            m+=a;
        }
        cout << "Mary won " << n-m << " times and John won " << m << " times\n";
    }
    return 0;
}